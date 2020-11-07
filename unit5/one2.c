#include<stdio.h>
void search(int b[],int m,int y);
int main()
{
      int a[25],x,n,i;
      printf("enter the size  of the array \n");
      scanf("%d",&n);
      printf("enter the elements :");
      for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
      printf("enter the elements to be selected :");
      scanf("%d",&x);
      search(a,n,x);
return 0;
}

void search(int b[],int m,int y)
{
    int n;
    int i,flag =0;
    for(i=0;i<m;i++)
     {
       if(b[i]==y)
       {
         flag =1;
         break;
       }
     }
     if(flag==1)
     {
        printf("element found");
     }
     else
     {
       printf("element not found");
     }
}
