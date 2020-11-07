#include<stdio.h>
#include<string.h>

typedef struct 
{
   char fname[20];
   char initial;
   char iname[30];
} STUDENT;
 
typedef struct
{
     char type;
     union
     {
         char school[40];
          STUDENT student;
     } un;
} NAME;

int main()
{
    int i;
    NAME b={'A',"SIA school"};
    NAME fnd;
    NAME st[2];
    fnd.type = 'p';
    strcpy(fnd.un.student.fname,"Syed");
    strcpy(fnd.un.student.iname,"Ali");
    fnd.un.student.initial = 'A';
    st[0] = b;
    st[1] = fnd;
    for(i=0;i<2;i++)
    {
       switch(st[i].type)
       {
          case 'A':printf("school:%s\n",st[i].un.school);
          break;
          case 'P':printf("friend:%s %c %s\n",st[i].un.student.fname,st[i].un.student.initial,st[i].un.student.iname);
          break;
          default:printf("error in type\n");
          break;
       }
    }
return 0;
}

          
    



