#include<stdio.h>
#include<stdlib.h>

typedef struct
{
   int dob[80];
   int marks;

} STUDENT;
 

int main()
{
    FILE *rf;
    STUDENT stu;
    rf = fopen("student.txt","a");
    if(rf == NULL)
    {
      printf("unable to open the file\n");
      exit(1);
    }
    printf("enter the date of the student :");
    scanf("%s",&stu.dob);
    printf("enter the marks no :");
    scanf("%d",&stu.marks);
    fprintf(rf,"%d %d",stu.dob,stu.marks);
    fclose(rf);
return 0;
}
