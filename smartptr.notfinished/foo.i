//file: foo.i
%module foo
%{
#include "foo.h"
    %}
    %include "foo.h"
    %template (SmartptrFoo) auto_ptr<Foo>;

