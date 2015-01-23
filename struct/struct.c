#include "struct.h"
#include <stdio.h>

void print_student(struct Student* stu,int iPrintPair){
    printf("Name: %s\n"
            "Grade: %03d\n"
            "Academic:%3d\n"
            "Homework: %s %s\n"
            "Secret:   %c%c%c%c%c%c\n",
            stu->name,stu->grade,stu->academic,
            stu->homework.work1,
            stu->homework.work2,
            stu->secret[0],stu->secret[1],
            stu->secret[2],stu->secret[3],
            stu->secret[4],stu->secret[5]
            );
    if(!iPrintPair)return;
    if(stu->ptPair &&stu==stu->ptPair->a)
    {
        printf("I'm A of aPair\n"
                "B of the Pair is:\n");
        print_student(stu->ptPair->b,0);
    }
    if(stu->ptPair &&stu==stu->ptPair->b)
    {
        printf("I'm B of aPair\n"
                "A of the Pair is:\n");
        print_student(stu->ptPair->a,0);
    }
    printf("\n");
}

void set_secret(struct Student *s,char *sSecret)
{
    size_t i=0;
    while(i<5)
    {
        *(s->secret+i)=*(sSecret+i);
        i++; 
    }
} 
