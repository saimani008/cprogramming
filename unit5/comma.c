#include<stdio.h>
void display(int);
int main()
{
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    display(number);
return 0;
}

void display(int num)
{
    int thous = num/1000;
    int hunds = num%1000;
    printf("the number in long form : %d,%d\n",thous,hunds);
}
