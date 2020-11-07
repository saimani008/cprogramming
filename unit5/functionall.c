#include<stdio.h>
float divv(float ,float);
int main()
{
    float num1,num2,div;
    printf("enter the values to divide :");
    scanf("%f%f",&num1,&num2);
    div  = divv(num1,num2);
    printf("the division of two numbers is : %f\n",div);
return 0;
}

float divv(float a,float b)
{
    float division;
    division = a/b;
return division;
}
