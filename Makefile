CC=gcc
CCFLAGS += -pthread -Wall -g -static
target = convert_parameters
#sources = $(wildcard *.c)
sources = tx-isp-init-params-day.c tx-isp-init-params-night.c main.c 

objects = $(patsubst %.c, %.o, $(sources))

ifeq ("$(origin S)", "command line")
  SENSOR_NAME = $(S)
endif
fw: convert_parameters
	./$< $(SENSOR_NAME)

all: fw

$(target):$(objects)
	$(CC) $(CCFLAGS) -o $@ $^
	rm $(objects)
	echo "generate $@"

%.o:%.c
	$(CC) -Wall -c -g -o $@ $<

.PHONY : clean
clean:
	-rm $(target)





