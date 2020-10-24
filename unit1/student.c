#include<stdio.h>
int main()
{
float credits;
char str[]="M1",str1[]="ENG",str2[]="CHE",str3[]="ENGL",str4[]="ED",str5[]="FOC",str6[]="APPL",str7[]="ITL",str8[]="ES";
char a='A',b='C',s='S',o='O',f='F',n='B';
printf("subject\t\tGrade\t\tCredits\t\t\n");
printf("%s\t\t%c\t\t%.2f\t\t\n",str,s,3.00);
printf("%s\t\t%c\t\t%.2f\t\t\n",str1,a,3.00);
printf("%s\t\t%c\t\t%.2f\t\t\n",str2,n,3.00);
printf("%s\t\t%c\t\t%.2f\t\t\n",str4,f,0.00);
printf("%s\t\t%c\t\t%.2f\t\t\n",str5,b,3.00);
printf("%s\t\t%c\t\t%.2f\t\t\n",str6,o,1.50);
printf("%s\t\t%c\t\t%.2f\t\t\n",str7,o,1.50);
printf("%s\t\t%c\t\t%.2f\t\t\n",str3,o,1.50);
printf("%s\t\t%c\t\t%.2f\t\t\n",str8,o,1.50);
printf("total sgpa scored %.2f\n",8.18);
return 0;
}
