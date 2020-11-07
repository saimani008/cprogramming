#include<stdio.h>
int show(int *);
int main()
{
        int array[] = { 0,9,1,6,4,6,8,2,3,5};
        int i;
        printf("the elements in the array are :\n");
        for(i=0;i<10;i++)
        {
            show(&array[i]);
        }
return 0;
}



int show(int *n)
 {
      printf("%d",*n);
}
   
