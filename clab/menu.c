#include<stdio.h>
#define PI 3.14
int  main()
{
     float area,radius;
     int choice;
     float length,breadth,height;
     printf("*******MENU*********\n");
     printf("1.CIRCLE AREA\n"); 
     printf("2.RECTANGLE AREA\n");
     printf("3.TRIANGLE AREA\n");
     printf("ENTER YOUR CHOICE :");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:printf("Enter the radius :");
               scanf("%f",&radius);
               printf("the area of the circle is :%f\n", PI*radius*radius);break;
        case 2:printf("Enter the length and breadth :");
               scanf("%f%f",&length,&breadth);
               printf("the area of the rectangle is :%f\n",length*breadth);break;
        case 3:printf("Enter the height and breadth :");
               scanf("%f%f",&height,&breadth);
               printf("the area of the triangle is :%f\n",(height*breadth)/2);break;
        default :printf("enter valid choice\n");break;
     }
return 0;
}

                                                                               
     
   
