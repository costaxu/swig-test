//file: foo.i
%module foo

%{
#include "foo.h"
%}

%rename (foo_add_int) operator+(const Foo&,int);
%include "foo.h"
