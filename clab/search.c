#include<stdio.h>
int main()
{
     int array[10][10],value,found;
     int rows ,columns;
     printf("enter no of rows and columns :");
     scanf("%d%d",&rows,&columns);
     printf("enter the  elements in the array :\n");
     for(int i=0;i<rows;i++)
     {
        for(int j=0;j<columns;j++)
        {
           scanf("%d",&array[i][j]);
        }
     }
     printf("enter any element to search :");
     scanf("%d",&value);
     for(int i=0;i<rows;i++)
     {
       for(int j=0;j<columns;j++)
       {
             if(array[i][j]==value)
              {
                 printf("Element found at array[%d][%d]\n",i,j);
                 found =1;
              }
         }
     }
     if(found==0)
     {
         printf("entered element is not found \n");
     }
     
return 0;
}

        
