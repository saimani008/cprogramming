#include<stdio.h>
int main()
{
     int number = 0, sum = 0,i,n;
     printf("Enter the number of even sum do you want :");
     scanf("%d",&n);
     printf("The %d even numbers are :\n",n);
     for(i=0;i<n;i++)
     {
        printf("%d\n",number);
        sum = sum+number;
        number += 2;
     }
     printf("the sum of %d even numbers is :%d\n",n,sum);
return 0;
}
