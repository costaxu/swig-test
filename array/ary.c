//file: ary.c
#include <stdio.h>
int a[5]={1,2,3,4,5};
int b[6]={10,20,30,40,50,60};

void PrintArray(int *a,size_t n)
{
    size_t i=0;
    printf("{");
    for(i=0;i<n;i++)
    {
        printf("%d,",*a++);
    }
    printf("}\n");
}

void pa()
{
    PrintArray(a,sizeof(a)/sizeof(int));
}

void pb()
{
    PrintArray(b,sizeof(b)/sizeof(int));
}
