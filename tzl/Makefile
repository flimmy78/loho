####################################################
# 
# 1��2010-6-7 ���δ�����MAKEFILE
# 2) 2010-6-8 ����vioĿ¼��
####################################################


#�����ƽ̨�ϵĽ�����뻷��
CROSS_COMPILER:=arm-hismall-linux-
CC:=$(CROSS_COMPILER)g++
GCC:=$(CROSS_COMPILER)gcc

EXE_NAME:=./release/tzl_demo

#�����Ŀ¼�ṹ####################################################
#��Ŀ¼
PROJECT_ROOT:=$(shell pwd)/src
#��������Ŀ¼
RELEASE_DIR:=$(PROJECT_ROOT)/release
#RMCOMMONĿ¼
RMCOMMON_DIR:=$(PROJECT_ROOT)/rmcommon
#VIOĿ¼
VIO_DIR:=$(PROJECT_ROOT)/vio
#ADCHIPĿ¼
ADCHIP_DIR:=$(PROJECT_ROOT)/adchip


###############################################################
#�������ѡ��
CFLAGS+=-Wall  -Werror 

LDFLAGS+=-lpthread -lm


#HI3520ƽ̨�ṩ��ͷ�ļ�
INCLUDE_DIR+=-I$(PROJECT_ROOT)/hi3520/include
INCLUDE_DIR+=-I$(PROJECT_ROOT)/hi3520/include/mkp
INCLUDE_DIR_SLAVE+=-I$(PROJECT_ROOT)/hi3520/include
INCLUDE_DIR_SLAVE+=-I$(PROJECT_ROOT)/hi3520/include/mkp

#HI3520ƽ̨�ṩ�Ŀ��ļ�
HI3520STATIC_LIB_PATH:=$(PROJECT_ROOT)/hi3520/lib.rel
STATIC_LIB_LIST+=$(HI3520STATIC_LIB_PATH)/libmpi.a \
	$(HI3520STATIC_LIB_PATH)/lib_VoiceEngine.a \
 	$(HI3520STATIC_LIB_PATH)/lib_amr_spc.a \
	$(HI3520STATIC_LIB_PATH)/lib_amr_fipop.a \
	$(HI3520STATIC_LIB_PATH)/lib_aec.a \
	$(HI3520STATIC_LIB_PATH)/libloadbmp.a \
	$(HI3520STATIC_LIB_PATH)/libtde.a \
	$(HI3520STATIC_LIB_PATH)/lib_aacdec.a \
	$(HI3520STATIC_LIB_PATH)/lib_aacenc.a \
	$(HI3520STATIC_LIB_PATH)/libresampler.a \
	$(HI3520STATIC_LIB_PATH)/libpciv.a
	
#����һЩ���õĺ궨��ͺ���
INCLUDE_DIR+=-I$(RMCOMMON_DIR)/include		

#Video Input and Video Output
INCLUDE_DIR+=-I$(VIO_DIR)/include
	
#ADCHIPĿ¼
INCLUDE_DIR+=-I$(ADCHIP_DIR)/include	
	
CFLAGS+=$(INCLUDE_DIR)
LDFLAGS+=$(STATIC_LIB_LIST)
	
objects = main.o vio.o adchip.o

$(EXE_NAME) : $(objects)
	$(CC) $(CFLAGS) -o $(EXE_NAME) $(objects) 	$(LDFLAGS)
main.o : $(PROJECT_ROOT)/main.c
	$(CC) $(CFLAGS) -c $(PROJECT_ROOT)/main.c  $(LDFLAGS)
vio.o : $(VIO_DIR)/vio.c
	$(CC) $(CFLAGS) -c $(VIO_DIR)/vio.c  $(LDFLAGS)
adchip.o : $(ADCHIP_DIR)/adchip.c
	$(CC) $(CFLAGS) -c $(ADCHIP_DIR)/adchip.c  $(LDFLAGS)
	

.PHONY : clean
clean:
	-rm -f $(EXE_NAME) *.o	


