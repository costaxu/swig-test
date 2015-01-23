//file : foo.h
#include <stdio.h>

class Foo
{
    
    public:
        int x;
        int y;
        Foo operator+(const Foo& f) const;
        Foo operator-(const Foo& f) const;
        friend Foo operator+(const Foo&f , int i);
};
