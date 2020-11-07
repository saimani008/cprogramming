#include<stdio.h>
void area_per(int ,int*,int*);
int main()
{
     int s,area,perimeter;
     printf("enter the side of a square :");
     scanf("%d",&s);
     area_per(s,&area,&perimeter);
     printf("area = %d\n",area);
     printf("perimeter = %d",perimeter);
return 0;
}

void area_per(int s,int *A,int *p)
{
     *A = s*s;
     *p = 4*s;
}
