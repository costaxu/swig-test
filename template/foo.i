//file: foo.i
%module foo
%{
#include "foo.h"
    %}

    %include "foo.h"
    %template (Queuei) Queue<int>;