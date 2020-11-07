#include<stdio.h>
int main()
{
    int arr[30],*ptr,total=0,n;
    printf("Enter the no of elements of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
          ptr = arr;
    }
    for(int i=0;i<n;i++)
    {
         total += *ptr;
         ptr++;
    }
    printf("the sum of the elements in the array using pointers is: ");
    printf("%d",total);
    printf("\n");
return 0;
}
