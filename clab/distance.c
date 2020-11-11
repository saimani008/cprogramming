#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2;
    float distance;
    printf("Enter the x1 and x2 values :");
    scanf("%f%f",&x1,&x2);
    printf("Enter the y1 and y2 values :");
    scanf("%f%f",&y1,&y2);
    distance =  sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("the distance between two points is : %f\n",distance);
return 0;
}

    
