#file: Makefile
LOCAL_CFLAG= -g -Werror -O3
ALL= mypython
include ../Makefile.in

mypython: foo_wrap.c foo.c
	gcc foo.c foo_wrap.c \
	-Xlinker -export-dynamic \
	-DHAVE_CONFIG_H -I/usr/include/python2.6 \
	-I/usr/lib/python2.6/config \
	-L/usr/lib/python2.6/config -lpython2.6 -lm -ldl \
	-o mypython
