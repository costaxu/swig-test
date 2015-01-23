#!/usr/bin/python

#file: testary.py
import ary
print "a is:"
ary.pa()
print str(ary.cvar.a)
print "b is:"
print str(ary.cvar.b)
ary.pb()

print "\n"
ary.cvar.a=ary.cvar.b

print "After a=b"
print "a is:"
ary.pa()
print str(ary.cvar.a)
print "b is:"
print str(ary.cvar.b)
ary.pb()

