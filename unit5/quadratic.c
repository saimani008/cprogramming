#include<stdio.h>
#include<math.h>
void read(int *a,int *b,int *c);
int roots(int a,int b,int c,double *pr1,double *pr2);
void display(int numroots,int a,int b,int c,double r1,double r2);
int main()
{
     int a,b,c,numofroots;
     double r1,r2;
     char ch = 'Y';
     while(ch=='Y'||ch== 'y')
     {
         read(&a,&b,&c);
         numofroots = roots(a,b,c,&r1,&r2);
         display(numofroots,a,b,c,r1,r2);
         printf("\nDo you want to solve another equation(Y/N) :");
         scanf(" %c",&ch);
     }
     printf("\n thank you....\n");
return 0;
}


void read(int *a,int *b,int *c)
{
      printf("please enter coefficients a,b,&c:");
      scanf("%d%d%d",a,b,c);
return;
}



int roots(int a,int b,int c,double *pr1,double *pr2)
{
       int res ;
       double disc,root;
       if(a==0&&b==0)
       {
          res  = -1;
       }
       else
       {
           if(a==0)
            {
               *pr1 = -c/(double)b;
                res =1;
            }
            else
            {
                disc = b*b-(4*a*c);
                if(disc>=0)
                {
                   root = sqrt(disc);
                   *pr1 = (-b+root)/(2*a);
                   *pr2 = (-b-root)/(2*a);
                    res = 2;
                }
                else
                {
                   res = 0;
                }
            }
       }
return res;
}




void display(int numofroots,int a,int b,int c,double r1,double r2)
{
       printf("the equation is :%dx**2+%dx+%d\n",a,b,c);
       switch(numofroots)
       {
         case 2:printf("the roots are :%6.3f & %6.3f\n",r1,r2);break;
         case 1:printf("it has only one root :%6.3f\n",r1);break;
         case 0:printf("the given equation have imaginary roots\n");break;
         default :printf("please enter the valid coefficients\n");break;
       }
return;
}

   





