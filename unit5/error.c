#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   char ch;
   char name[20];
   int no[5];
   fp = fopen("data.txt","a");
   if(fp == NULL)
   {
     printf("unable to open the file\n");
   }
   printf("enter the data to append\n");
   fflush(stdin);
   fgets(name,20,stdin);
   fgets(no,5,stdin);
   fputs(name,fp);
   fscanf(fp,"%s %d",name,&no);
   printf("%s %d\n",name,no);
   fclose(fp);
return 0;
}
