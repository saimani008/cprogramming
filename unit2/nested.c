#include<stdio.h>
int main()
{
int percentage,internships,skills;
printf("enter the details\n");
scanf("%d%d%d",&percentage,&internships,&skills);
if(percentage>=90)
{
     if(internships>=1)
     {
         if(skills>=3)
          {
            printf("selected\n");
          }
          else
           {
           printf("not slected\n");
           }
     }
}
return 0;
}

