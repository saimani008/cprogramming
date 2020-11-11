#include<stdio.h>
int main()
{ 


    int arr1[100][100],arr2[100][100],arr3[100][100];
    int row1,row2,column1,column2;
    printf("enter the no of rows and volumns  :");
    scanf("%d%d",&row1,&column1);
    printf("enter the elements of the array 1 :\n");
    for(int i=0;i<row1;i++)
    {
      for(int j=0;j<column1;j++)
      {
       scanf("%d",&arr1[i][j]);
      }
    }
    printf("enter the no of rows and columns inthe array :");
    scanf("%d%d",&row2,&column2);
    printf("enter the elements of the array 2 :\n");
    for(int i=0;i<row2;i++)
    {
      for(int j=0;j<column2;j++)
      {
         scanf("%d",&arr2[i][j]);
      } 

    }
     if(row1==column2)
     {
        for(int i=0;i<row1;i++)
        {
          for(int j=0;j<column2;j++)
          {
           arr3[i][j] = 0;
            for(int k=0;k<row1;k++)
            {
              arr3[i][j] = arr3[i][j]+(arr1[i][k]*arr2[k][j]);
             }
          }
        }
      }
     else
     {

       printf("matrix multiplication is not possible \n"); 
     }
     for(int i=0;i<row1;i++)
      {
        for(int j=0;j<column2;j++)
        {
          printf("%d ",arr3[i][j]);
        } 
        printf("\n");
      }
return 0;
}
               
