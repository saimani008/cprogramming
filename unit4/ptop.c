#include<stdio.h>
int main()
{


      int variable,*p,**a,***b;
      printf("enter the value of the variable :");
      scanf("%d",&variable);
      p = &variable;
      a = &p;
      b = &a;
      printf("%d\n",*p);
      printf("%d\n",**a);
      printf("%d\n",***b);
     

return 0;
}

