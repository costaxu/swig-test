//file: foo.c
#include <stdio.h>
int bar = 2;
float barfloat = 3.14;
double bardouble=3.1415926;
short barshort=10000;
long  barlong=200;
long long barlonglong=2000000000000ll;
unsigned barunsigned = 200;
const int barconst=1;
int barFunc()
{
    printf("this is bar %d.\n"
            "barfloat %f\n"
            "bardouble %f\n"
            "barshort %hd\n"
            "barlong  %ld\n"
            "barlonglong %lld\n"
            "barunsigned %u\n"
            "barconst %d\n"
            ,bar,barfloat,
            bardouble,barshort,
            barlong,barlonglong,
            barunsigned,barconst);
    return 0;
}
