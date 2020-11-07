#include<stdio.h>
int fb(int n);
void main()
{ 
    int n,i,res;
    printf("enter range :\n");
    scanf("%d",&n);
    printf("the first %d fibonacci number are :",n);
    for(i=0;i<=n;i++)
    {
        res = fb(i);
        printf("\n%d",res);
    }
}


int fb(int n)
{
    if(n==0||n==1)
    {
       return n;
    }
    else
    {
      return(fb(n-1)+fb(n-2));
    }
}


