#include<stdio.h>
#define D_FACTOR 57.295779
int main()
{
float radians,degree;
printf("enter the radians to convert:");
scanf("%f",&radians);
degree = radians*D_FACTOR;
printf("%f",degree);
return 0;
}

