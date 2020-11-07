#include<stdio.h>
int main()
{
        int a=20,*p;
        p = &a;
        printf("%d\n",*p);
        printf("%d\n",p);
        printf("%d\n",&p);
return 0;
}
