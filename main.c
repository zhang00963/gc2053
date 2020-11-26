/*test application for Ingenic android 4.1
*
* Copyright 2012 Ingenic Semiconductor LTD.
*
* author: YeFei <feiye@ingenic.cn>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <getopt.h>
#ifdef HAVE_ANDROID_OS
#include <fcntl.h>
#else
#include <sys/fcntl.h>
#endif
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <asm/types.h>
#include <linux/fb.h>
#include "main.h"
#include "tiziano_params.h"

#define TX_ISP_SETTING_VERSION "2.10"
#define VERSION_SIZE 8

extern tisp_params_t tparams_night;
extern tisp_params_t tparams_day;

static struct isp_parameter_header headers[ISP_PARAM_MAX_INDEX];

static unsigned int crc_table[8] = {
	0x00000000L, 0x77073096L, 0xee0e612cL, 0x990951baL,
	0x076dc419L, 0x706af48fL, 0xe963a535L, 0x9e6495a3L,
};

static unsigned int crc32(const unsigned int *p, unsigned int len)
{
	int i = 0;
	unsigned int crc = crc_table[0];
	for(i = 0; i < len; i++){
		crc ^= *p++;
		crc = crc ^ crc_table[crc & 0x7];
	}

	return crc;
}

int main(int argc, char **argv) {

	int index = 0;
	char file_name[64];
	char version[VERSION_SIZE];
	unsigned int total_size = 0;
	char *bindata;
	char *curson;
	char *crc_p = NULL;
	char *position = NULL;
	FILE *fp = NULL;
	//bin file name
	snprintf(file_name, sizeof(file_name), "%s.bin", argv[1]);
	/* for(index = 0; index < ISP_PARAM_MAX_INDEX; index++){ */
	/* 	snprintf(headers[index].flag, sizeof(version), "header%d", index); */
	/* } */

	//1
	//Headers flag

	snprintf(headers[index].flag, sizeof(version), "header%d", index);


	//Headers size
	headers[ISP_PARAM_BASE_INDEX].size = sizeof(tisp_params_data_t) * 2;
//	headers[ISP_PARAM_CUSTOM_INDEX].size = sizeiof(customer) * 2;
	total_size = sizeof(version) +  sizeof(headers[ISP_PARAM_BASE_INDEX]) + headers[ISP_PARAM_BASE_INDEX].size;
//	printf("size is tparams_day is %d,%d\n",sizeof(tisp_params_data_t),total_size);

	bindata = malloc(total_size);
	if(bindata == NULL){
		printf("Failed to malloc\n");
		return -1;
	}
	memset(bindata,0,total_size);	
	curson = bindata;
	
	memcpy(curson,TX_ISP_SETTING_VERSION,sizeof(version));

	
	curson += sizeof(version);
	position = curson;
	curson +=sizeof(headers[0]);
	crc_p = curson;
//	printf("size before data is %d\n",sizeof(version)+sizeof(headers[0]));
	memcpy(curson,&tparams_day.params_data,sizeof(tisp_params_data_t));
//	printf("size of data is %d\n",sizeof(tisp_params_data_t));
	curson += sizeof(tisp_params_data_t);
	memcpy(curson,&tparams_night.params_data,sizeof(tisp_params_data_t));

	headers[ISP_PARAM_BASE_INDEX].crc = crc32((unsigned int*)crc_p,headers[ISP_PARAM_BASE_INDEX].size/4);
	memcpy(position, &headers[0],sizeof(headers[0]));

	fp = fopen(file_name,"w+");
	if(fp == NULL){
		printf("Open sensor bin file dump failed!!!\n");
		return -1;
	}
	fwrite(bindata,total_size,1,fp);
	printf("total is %d,bytes is %d\n",total_size,total_size/8);
	fflush(fp);
	fclose(fp);

	return 0;
}
