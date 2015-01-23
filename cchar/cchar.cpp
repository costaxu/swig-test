#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string>
using namespace std;
void FillZero(char* pc,size_t * piLen)
{
    size_t i=0;
    while(i++<*piLen/2 )
        *pc++ = '0';
    *pc = 0;
    *piLen = i;
}

string Repeat(const string& s)
{
    return s+s; 
}
