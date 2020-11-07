#include<stdio.h>
#include<stdlib.h>
int main()
{
     int quantity;
     FILE*sp;
     if(!(sp=fopen("data2.txt","r")))
     {
            printf("this file cannot be opened or not existed\n");
            exit(100);
     }
     while(fscanf(sp,"%*%d%d%*[^\n]",&quantity)!=EOF)
     {
           printf("the second integer is: %4d\n",quantity);
     }
     fclose(sp);
return 0;
}

