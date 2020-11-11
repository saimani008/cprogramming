#include<stdio.h>
int main()
{
    int p,q,s,r;
    printf("enter the value of p and q :");
    scanf("%d%d",&p,&q);
    printf("enter the value of r and s :");
    scanf("%d%d",&r,&s);
    if((q>r)&&(s>p)&&((r+s)>(p+q)))
    {
        printf("correct values\n");
    }
    else
    {
        printf("Wrong values\n");
    }
return 0;
}

