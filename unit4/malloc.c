#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr;
      int n;
      printf("enter the no of elements of the array :");
      scanf("%d",&n);
      ptr = (int*)malloc(n*sizeof(int));
      for(int i=0;i<n;i++)
      {
             scanf("%d",&ptr[i]);
      } 
      for(int i=0;i<n;i++)
      {
             printf("%d\n",ptr[i]);
      }
return 0;
}
   
