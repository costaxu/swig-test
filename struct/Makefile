#file: Makefile

ALL=_structure.so
include ../Makefile.in
_structure.so: structure_wrap.c.o struct.c.o
	${BUILD_DYNAMIC_LIB_C}
