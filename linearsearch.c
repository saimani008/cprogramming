#include<stdio.h>
int linearsearch(int element ,int arry[],int size);
int i;
int main()
{
    int n,key,arr[100];
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("Enter elements into array :");
    for(i=0;i<n;i++)
    {
           scanf("%d",&arr[i]);
    }
    printf("Enter the key element to be searched :");
    scanf("%d",&key);
    linearsearch(key,arr,n);
return 0;
}


int linearsearch(int element,int arry[],int size)
{
    int count =0;
    for(i=0;i<size;i++)
    {
         if(element==arry[i])
         {
              count++;
              break;
         }
         else
         {
              count =0;
         }
    }
    if(count==1)
    {
        printf("%d element is found at location %d",element,i);
        break;
    }
    else
    {
         printf("element not found\n");
    }
}




    
