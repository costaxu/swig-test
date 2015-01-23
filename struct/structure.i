%module structure
%{
#include "struct.h"
extern void print_student(struct Student*);
extern void set_secret(struct Student*,char*);
%}

struct Homework
{
    %immutable;
    char* work1;
    %mutable;
    char* work2;
    
};
struct Student
{
    char* name;
    int   grade;
    int   academic;
    struct StudentPair* ptPair;
    struct Homework homework;
    char  secret[6];
};


struct StudentPair
{
    struct Student* a;
    struct Student* b;
};



void print_student(struct Student*);
void set_secret(struct Student*,char*);
