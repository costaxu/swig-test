//file: foo.cpp
#include "foo.h"
#include <iostream>
using namespace std;
Foo::Foo(int bar):bar1(bar)
{

}

Foo::~Foo()
{
    cout<<"descrutive Foo"<<endl;
}

int Foo::bar()
{
    cout<<"this is "<<bar1<<endl;
    return 0;
}

