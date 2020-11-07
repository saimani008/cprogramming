#include<stdio.h>
int total(int,int,int);
int main()
{
    int TERM_1,TERM_2,TERM_3,add;
    printf("ENTER THE TERM_1 FEES :");
    scanf("%d",&TERM_1);
    printf("ENTER THE TERM_2 FEES :");
    scanf("%d",&TERM_2);
    printf("ENTER THE TERM_3 FEES :");
    scanf("%d",&TERM_3);
    add = total(TERM_1,TERM_2,TERM_3);
    printf("TOTAL FEES :%d\n",add);
return 0;
}

int total(int a,int b,int c)
{
    int sum;
    sum = a+b+c;
return sum;
}
