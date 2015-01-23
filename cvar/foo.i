%module foo
%{
extern int bar;
extern float barfloat;
extern double bardouble;
extern short  barshort;
extern long   barlong;
extern long long barlonglong;
extern unsigned barunsigned;
extern int barconst;
enum People{Man,Woman};
%}

int bar;
float barfloat;
double bardouble;
short  barshort;
long   barlong;
long long barlonglong;
unsigned barunsigned;
int barFunc();
%immutable;
int barconst;
#define PI 3.1415
#define VERSION "1.0"

enum People{Man,Woman};
%constant int barconstant=100;
