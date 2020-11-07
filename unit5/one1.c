#include<stdio.h>
int inc(int);
int main()
{
     int i,n,a[20];
     printf("enter the value of n :\n");
     scanf("%d",&n);
     printf("enter the array elements:\n");
     for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
          a[i] = inc(a[i]);
      }
      for(i=0;i<n;i++)
       {
          printf("%3d",a[i]);
       }
return 0;
}


int inc(int x)
{
   x=x+5;
return x;
}

      
