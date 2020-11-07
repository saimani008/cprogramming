#include<stdio.h>
void display(int[]);
int rows =2;
int cols =4;
int main()
{
     int i;
     int c[2][4] = {
                      {2,4,6,8},
                      {3,5,7,9}
                   };
     for(i=0;i<rows;i++)
     {
        display(c[i]);
     }
return 0;
}

void display(int y[])
{
    int j;
    for(j=0;j<cols;j++)
    {
       printf("%d",y[j]);
    }
    printf("\n");
}
