#!/usr/bin/python
#coding: utf-8

from structure import *

def InitStudent(name,grade,academic,work1,work2,secret,friendStudent=None):
    stu=Student()
    stu.name=name
    stu.grade=grade
    stu.academic=academic
    stu.homework.work1=work1
    stu.homework.work2=work2
    set_secret(stu,secret)
    if friendStudent :
        if stu.ptPair is None:
            stu.ptPair=StudentPair()
        friendStudent.ptPair=stu.ptPair
        stu.ptPair.a=stu
        stu.ptPair.b=friendStudent
    return stu

costaxu = InitStudent("costaxu",1,100,"math","physics","aeiou")
ceciawa = InitStudent("ceciawa",2,101,"chemistry","biology","abcde",costaxu)

print_student(costaxu)
print costaxu.ptPair
print costaxu.homework
print_student(ceciawa)




