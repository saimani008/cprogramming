#include<stdio.h>
int main()
{   
      int arr1[100][100],arr2[100][100];
      int rows,columns;
      printf("enter the no of rows and columns :");
      scanf("%d%d",&rows,&columns);
      printf("enter the elements in the array :\n");
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<columns;j++)
        {
           scanf("%d",&arr1[i][j]); 
           arr2[j][i] = arr1[i][j];
        }
      }
      printf("the transpose is :\n");
      for(int i=0;i<rows;i++)
      {
         for(int j=0;j<columns;j++)
         {
           printf("%d ",arr2[i][j]);
         }
         printf("\n");
       }
return 0;
}
