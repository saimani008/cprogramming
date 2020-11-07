#include<stdio.h>
#include<stdlib.h>
int main()
{


       int *ptr;
       int n,i;
       printf("enter the no of elements into the array :");
       scanf("%d",&n);
       ptr = (int*)calloc(n,sizeof(int));
       printf("enter the elements of the arrray :");
       for(i=0;i<n;i++)
       {
           scanf("%d",&ptr[i]);
       }
       for(i=0;i<n;i++)
       { 
           printf("%d",ptr[i]);
       }
       free(ptr);
return 0;
}

 
