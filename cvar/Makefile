#file: Makefile
LOCAL_INCLUDE= 
LOCAL_LIB= 
LOCAL_SWIGFLAG= -globals arg
ALL=_foo.so foo_main


include ../Makefile.in

foo_main: foo_main.c.o foo.c.o
	${BUILD_BINARY_C}
