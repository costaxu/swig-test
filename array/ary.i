//file: ary.i
%module ary
%{

extern int a[5];
extern int b[6];

extern void pa();
extern void pb();
%}

int a[5];
int b[6];
void pa();
void pb();
