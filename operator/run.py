#!/usr/bin/python
#coding: utf-8
import foo
if __name__=='__main__':
    f=foo.Foo()
    f.x=10
    f.y=20
    f1=foo.Foo()
    f1.x=30
    f1.y=30

    f2=f+f1
    print f2.x
    print f2.y

    f3=foo.foo_add_int(f,10)
    print f3.x
    print f3.y
