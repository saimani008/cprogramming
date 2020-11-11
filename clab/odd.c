#include<stdio.h>
int main()
{
     int arr1[100],arr2[100],arr3[100],n;
     printf("Enter the no of elements of the array :");
     scanf("%d",&n);
     printf("Enter the elements of the array :");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr1[i]);
     }
     for(int i=0;i<n;i++)
     {
       if(arr1[i]%2==0)
       {
          arr2[i] = arr1[i];
       }
       else
       {
         arr3[i] = arr1[i];
       }
     }
     printf("the even elements of the array are  :");
     for(int i=0;i<n;i++)
     {
        if(arr2[i]!=NULL)
         {
              printf("%d\n",arr2[i]);
         }
      }
      printf("the odd elements of the array are  :");
      for(int i=0;i<n;i++)
      {
        if(arr3[i]!=NULL)
        {
            printf("%d\n",arr3[i]);
        }
      }
return 0;
}

     
