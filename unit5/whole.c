#include<stdio.h>
void incr(int);
int main()
{
   int i,k,b[3][3],rows =3,cols = 3;
   printf("enter each element of an array\n");
   for(i=0;i<rows;i++)
   {
      for(k=0;k<cols;k++)
      {  
         scanf("%d",&b[i][k]);
      }
   }
   for(i=0;i<rows;i++)
   {
     for(k=0;k<cols;k++)
     {
       incr(b[i][k]);
     }
   }
return 0;
}

void incr(int y)
{
    y = y+2;
    printf("the element after increment is :");
    printf("%d",y);
    printf("\n");
}
