#file: makefile
ALL=_foo.so foo_test
.SECONDARY: foo_wrap.cxx

include ../Makefile.in
foo_test: foo_test.cpp.o foo.cpp.o
	${BUILD_BINARY_CXX}
