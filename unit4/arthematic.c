#include<stdio.h>
int main()
{
     int number1,number2;
     int *ptr1,*ptr2;
     printf("Enter the number to perform arthematic operations : ");
     scanf("%d%d",&number1,&number2);
     ptr1 = &number1;
     ptr2 = &number2;
     printf("the address of number1 and number2 is : %d  %d\n",ptr1,ptr2);
     printf("the addition is %d\n",*ptr1+number2);
     printf("the subtraction is %d\n",*ptr2-number1);
     printf("the multiplication of number and number2 is %d\n",(*ptr1)*(*ptr2));
     printf("the division of number1 and number2 is %d\n",(*ptr1)/(*ptr2));
     printf("the modulo division of number1 and number2 is %d\n",*ptr1%*ptr2);
     printf("the address of number1 and number2 is %d and %u after increment \n",++ptr1,++ptr2);
     printf("the address of number1 and number2 is %d and %u after decrement\n",--ptr1,--ptr2);
     printf("the adrress of number1 and number2 is %d and %d after pincrement\n",ptr1++,ptr2++);
     printf("the address of number1 and number2 is %d and %d after pdecrement\n",ptr1--,ptr2--);
     
return 0;
}
