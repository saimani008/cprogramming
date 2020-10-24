#include<stdio.h>
#define pi 3.14
int main()
{
       float area ,circumfrence,radius;
       printf("enter the radius of the circle:");
       scanf("%f",&radius);
       area = pi*radius*radius;
       circumfrence = 2*pi*radius;
       printf("the area of the circle is %f\n",area);
       printf("the circumfrence of the circle is %f\n",circumfrence);
return 0;
}
