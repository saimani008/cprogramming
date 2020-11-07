#include<stdio.h>
int main()
{
     struct people
     {
       char name[25];
       int number;
     };

    struct people no1 = { "veera",86395};
    struct people no2;
    no2 = no1;
    printf("%s\t%d\t\n",no1.name,no1.number);
    printf("%s\t%d\t\n",no2.name,no2.number);
return 0;
}
