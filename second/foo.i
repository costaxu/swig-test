//file foo.i
%module foo
%{
extern int bar();
%}
%include "embed.i"  
extern int bar();
