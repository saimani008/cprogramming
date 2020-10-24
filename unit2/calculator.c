#include<stdio.h>
float addition(float number1,float number2);
float subtraction(float number1,float number2);
float multiplication(float number1,float number2);
float division(float number1,float number2);
int main()
{
	float number1,number2;
	int choice,choice2;
	char ch,y='Y',n='N';
	again:
	printf("ENTER THE NUMBERS :");
	scanf("%f%f",&number1,&number2);
	printf("************MENU*************\n");
	printf("  1.ADDITION\n");
	printf("  2.SUBTRACTION\n");
	printf("  3.MULTIPLICATION\n");
	printf("  4.DIVISION\n");
	printf("PLEASE ENTER YOUR CHOICE\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("%f\n",addition(number1,number2));break;
		case 2:printf("%f\n",subtraction(number1,number2));break;
		case 3:printf("%f\n",multiplication(number1,number2));break;
		case 4:printf("%f\n",division(number1,number2));break;
		default:printf("ENTER VALID CHOICE\n");break;
	}

printf("\nHello enter a option to continue:\a\n");
//scanf("%d",&choice2);
scanf(" %c",&ch);
if(ch==y)
{
goto again;
}
else
{
printf("EXITING\n");
}
return 0;
}


float addition(float number1,float number2)
{
	return number1+number2;
}

float subtraction(float number1,float number2)
{
	return number1-number2;
}

float multiplication(float number1,float number2)
{
	return number1*number2;
}

float division(float number1,float number2)
{
	return number1/number2;
}



