#include<stdio.h>
int main()
{
   int *ptr[10],ptr1[10][10];
   int i,j,m,n;
   printf("enter the no of rows and coloumns :");
   scanf("%d%d",&m,&n);
   printf("enter the elements of the matrix :\n");
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
       scanf("%d",&ptr1[i][j]);
     }
   }
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         ptr[i*n+j] = &ptr1[i][j];
      }
   }
   for(i=0;i<m*n;i++)
   {
     *ptr[i] = *ptr[i]+3;
     printf("%d\n",*ptr[i]);
   }
return 0;
}
