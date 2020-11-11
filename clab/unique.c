#include<stdio.h>
int main()
{
    int arr[10],freq[100],n,count = 1;
    printf("enter the no of elements :"); 
    scanf("%d",&n);
    printf("enter the  elements in array \n"); 
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       for(int j=j+1;j<n;j++)
       {
          if(arr[i]==arr[j])
          {
             count++;
          }
          else
          {
             freq[i] = count;
          }
       }
     }
     printf("the unique elements are : \n");
     for(int i=0;i<n;i++)
     {
        if(freq[i] ==1)
        {
            printf("%d",arr[i]);
        }
     }
return 0;
}
   
