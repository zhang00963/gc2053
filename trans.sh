#!/bin/sh
####Select the sensor####
SENSOR="gc2053-t31"
#####NFS OR TFTP##Choose the upload method#
TOOL="NFS"
NFS_MY_PATH=/home/book/nfswork/mnt
NFS_WORK_PATH=/home/zjqi/nfsroot/mnt
TFTP_MY_PATH=/home/book/nfswork/mnt
TFTP_WORK_PATH=/home/zjqi/tftproot

make clean && make S=${SENSOR}

if [ ${TOOL} = "NFS" ];then
    if [ -d "${NFS_MY_PATH}" ];then
        if mountpoint -q ${NFS_MY_PATH};then
            echo "mounted"
        else
            echo "not mounted"
            mount -o nolock -t nfs 193.169.4.2:/home_b/nfsroot/zjqi ${NFS_MY_PATH}/
        fi
    
        cp ${SENSOR}.bin ${NFS_MY_PATH}/ -vf                                       

    elif [ -d "${NFS_WORK_PATH}" ];then
        if mountpoint -q ${NFS_WORK_PATH};then
            echo "mounted"
        else
            echo "not mounted"
            mount -o nolock -t nfs 193.169.4.2:/home_b/nfsroot/zjqi ${NFS_WORK_PATH}/
        fi

        cp ${SENSOR}.bin ${NFS_WORK_PATH}/ -vf                                                                                                   
    fi

elif [ ${TOOL} = "TFTP" ];then
    if [ -d "${TFTP_MY_PATH}" ];then
        cp ${SENSOR}.bin ${TFTP_MY_PATH}/ -vf 
    elif [ -d "${TFTP_WORK_PATH}" ];then
        cp ${SENSOR}.bin ${TFTP_WORK_PATH}/ -vf
    fi
fi

md5sum ${SENSOR}.bin
