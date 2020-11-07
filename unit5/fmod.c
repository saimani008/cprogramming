#include<stdio.h>
#include<math.h>
int main()
{
   int number1,number2 ,result;
   printf("enter the numbers :");
   scanf("%d%d",&number1,&number2);
   result = fmod(number1,number2);
   printf("%d",result);
return 0;
}
