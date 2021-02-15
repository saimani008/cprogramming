#include<stdio.h>
#include<stdlib.h>
void linearsearch(int element ,int arry[],int size);
int main()
{
    int n,key;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    printf("Enter elements into array :");
    for(int i=0;i<n;i++)
    {
           scanf("%d",&arr[i]);
    }
    printf("Enter the key element to be searched :");
    scanf("%d",&key);
    linearsearch(key,arr,n);
return 0;
}


void linearsearch(int element,int arry[],int size)
{
    for(int i=0;i<size;i++)
    {
         if(element==arry[i])
         {
               printf("%d is found at location %d",element,i);
         }
    }
}

    
