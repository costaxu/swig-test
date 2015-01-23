//file: foo_test.cpp
//
#include <stdio.h>
#include "foo.h"
int main()
{
    Foo f;
    f.x=100;
    f.y=200;
    Foo f1 = f+10;
    printf("%d\n%d\n",f1.x,f1.y);

}
