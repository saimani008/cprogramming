#include<stdio.h>
void arrele(int c[3][3]);
int  main()
{
   int arr[3][3],i,j;
   printf("enter 3*3 matrix :\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {  
        scanf("%d",&arr[i][j]);
     }
   }
   arrele(arr);
return 0;
}


void arrele(int arr[3][3])
{
   int i,j;
   printf("displaying :\n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
}


