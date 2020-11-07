#include<stdio.h>
int main()
{
    struct employee {
        
       char name[30];
       int idno;
       float salary;
      };

    struct employee emp;
    printf("employee name:");
    scanf("%s",&emp.name);
    printf("\n");
    printf("empyoee idno:");
    scanf("%d",&emp.idno);
    printf("\n");
    printf("employee salary:");
    scanf(" %f",&emp.salary);
    printf("\n");
return 0;
}
