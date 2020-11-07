#include<stdio.h>

struct student
{
   char name[25];
   int rollno;
   char branch[25];
   int marks[30];
   int total;
};

int main()
{
     struct student st[3];
     int i,j,n=3;
     for(i=0;i<n;i++)
     {
         printf("enter the name of the student:");
         scanf("%s",&st[i].name);
         printf("enter the rollno of the student:");
         scanf("%d",&st[i].rollno);
         printf("enter the branch of the student:");
         scanf("%s",&st[i].branch);
         printf("enter the marks of the student:\n");
         for(j=0;j<6;j++)
         {
                scanf("%d",&st[j].marks[j]);
         }
     }
    for(i=0;i<n;i++)
    {
       st[i].total =0;
       for(j=0;j<6;j++)
       {
          st[i].total = st[i].total+st[i].marks[j];
       }
    }
   printf("details of the students:\n");
   for(i=0;i<n;i++)
   {
       printf("name :%s\n",st[i].name);
       printf("rollno:%d\n",st[i].rollno);
       printf("branch :%s\n",st[i].branch);
       printf("total :%d\n",st[i].total);
       printf("\n");
   }
return 0;
}
