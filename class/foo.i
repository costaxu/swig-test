%module foo
%{
#include "foo.h"
%}

class Foo
{
public:
    Foo();
    ~Foo();
    char * bar;
    static const char* woo();
    static const char* _woo;
};

class FooSub:public Foo
{
public:
    static int woosub;
};

int foo(Foo* f);


