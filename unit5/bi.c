#include<stdio.h>
void add(int*,int*);
int  main()
{
    int x =10,y = 20;
    add(&x,&y);
}

void add(int *a,int *b)
{
   *a=*a+*b;
   *b=*b+2;
    printf("the values are a =%d ,b = %d\n" ,*a,*b);
}
