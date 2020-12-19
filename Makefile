ifneq ($(KERNELRELEASE),)
obj-m := hello.o
else
KDIR := /usr/src/linux-headers-5.4.0-58-generic

all:
	$(MAKE) -C $(KDIR) M=$$PWD
endif
