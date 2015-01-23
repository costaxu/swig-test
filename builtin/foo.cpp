#include "foo.h"
#include <stdio.h>
int Foo::bar()
{

        printf("This is bar;\n");
        return 0;
}

Foo Foo::operator+(const char* other) const
{
    return Foo();
}
