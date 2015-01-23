//file: foo.cpp
//
#include "foo.h"

Foo Foo::operator+(const Foo& f) const
{
    Foo f1;
    f1.x=x+f.x;
    f1.y=y+f.y;
    return f1;
}

Foo Foo::operator-(const Foo& f) const
{
    Foo f1;
    f1.x=x-f.x;
    f1.y=y-f.y;
    return f1;
}

Foo operator+(const Foo&f , int i)
{
    Foo f1;
    f1.x = f.x+i;
    f1.y = f.y+i;
    return f1;
}
