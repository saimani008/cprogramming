#include<stdio.h>
int main()
{
    int factorial = 1 ,number,i;
    printf("enter the number to calculate factorial of that number :");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
       factorial = i*factorial;
    }
    printf("the factorial of the number %d is %d\n",number,factorial);
return 0;
}
