#include "foo.h"
#include <malloc.h>

const char* Foo::_woo="It's woo";

Foo::Foo()
{
    bar=0;
}

Foo::~Foo()
{
    if(bar)
    {
        free(bar);
        bar=0;
    }    
}

const char* Foo::woo()
{
    return "Hello SWIG";
}

int FooSub::woosub = 1001;

int foo(Foo* f)
{
    return 0;
}
