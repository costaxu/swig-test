#pragma once
struct StudentPair;

struct Homework
{
    char* work1;
    char* work2;
    
};

struct Student
{
    char* name;
    int   grade;
    int   academic;
    struct StudentPair* ptPair;
    struct Homework homework;
    char   secret[6];
};

struct StudentPair
{
    struct Student* a;
    struct Student* b;
};
