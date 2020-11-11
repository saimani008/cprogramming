#include<stdio.h>
int main()
{
    int arr[50],n;
    printf("enter the no of elements of the array :");
    scanf("%d",&n);
    printf("enter the lelements of the array :");
    for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++)
     {
       for(int j=i+1;j<n;j++)
       {
         if(arr[i]>arr[j])
         {
           int num = arr[i];
           arr[i] = arr[j];
           arr[j] = num;
          }
        }
      }
     printf("the elements in ascending order :\n"); 
     for(int j=0;j<n;j++)
     {
       printf("%d\n",arr[j]);
     }
return 0;
}

