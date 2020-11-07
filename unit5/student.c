#include<stdio.h>
#include<stdlib.h>
   
typedef struct
   {
     char name[20];
     int roll;
     char branch[10];
     int year;
    } STUDENT;

int main() 
{
   STUDENT stu;
   FILE * fp;
   fp = fopen("student.txt","w");
   if(fp == NULL)
   {
     printf("unable to open the file\n");
     exit(1);
   }
   printf("enter the name of the student :");
   scanf("%s",&stu.name);
   printf("enter the roll :");
   scanf("%d",&stu.roll);
   printf("enter the branch of the student :");
   scanf("%s",&stu.branch);
   printf("enter the year of the study:");
   scanf("%d",&stu.year);
   fprintf(fp,"%s %d %s %d", stu.name,stu.roll,stu.branch,stu.year);
   fclose(fp);
return 0;
}
     
