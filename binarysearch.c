#include<stdio.h>
#include<stdlib.h>
void binarysearch(int a[],int num,int ele);
int main()
{
       int n,i,element;
       printf("enter the size of array :");
       scanf("%d",&n);
       int *arr = (int *)malloc(n*sizeof(int));
       printf("enter the elements into the array:");
       for(i = 0;i<n;i++)
       {
             scanf("%d",&arr[i]);
       }
       printf("enter element to be searched:");
       scanf("%d",&element);
       binarysearch(arr,n,element);
return 0;
}



void binarysearch(int a[],int num,int ele)
{
      int start=0,end = num,mid,count =0;
      for(int i=0;i<num;i++)
      {
              mid = (start+end)/2;
              if(a[mid]==ele)
              {
                    count++;
                    break;
              }
              else if(ele>a[mid])
              {
                    start = mid+1;
              }
              else if(ele<a[mid])
              {
                    end = mid-1;
              }
      }
      if(count==1)
      {
          printf("%d element is found at location %d\n",ele,mid);
      }
      else
      {
         printf("element not found\n");
      }
}
