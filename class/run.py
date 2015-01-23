#!/usr/bin/python
#coding: utf-8

#file: run.py
import foo
from foo import *
if __name__=='__main__':
    fo = Foo()
    print Foo_woo()
    print fo.woo()
    print cvar.Foo__woo
    
    fosub = FooSub() 
    print isinstance(fosub,Foo)
    print issubclass(FooSub,Foo)

    print foo(fo)
    print foo(fosub)
    

