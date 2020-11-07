#include<stdio.h>
#include<stdlib.h>

void up(int floor,int present);
void down(int floor,int present);

int main()
{
         int floor;
         int present = 0;
         printf("welcome\n");
         while(1)
         {
                   printf("enter the floor number:");
                   scanf("%d",&floor);
                   printf("closing the door\n");
                   if(present<floor)
                   {
                               up(floor,present);
                   }
                   else
                   {
                               down(floor,present);
                   }
                   present = floor;
                   printf("\n");
                   printf("\n");
         }
return 0;
}





void up(int floor,int present)
{
            if(floor==1)
            {
                      for(int i=present;i<floor;i++)
                      {
                               printf("%d ↑\n",i);
                      }
                      printf("the door is opening\n");
                      printf("******FLOOR %d*******\n",floor);
            }
            else if(floor==2)
            {
                     for(int i=present;i<floor;i++)
                     {
                               printf("%d ↑\n",i);
                     }
                     printf("the door is opening\n");
                     printf("******FLOOR %d******\n",floor);
            }
            else if(floor==3)
            {
                     for(int i=present;i<floor;i++)
                     {
                                printf("%d ↑\n",i);
                     }
                     printf("the door is opening\n");
                     printf("******FLOOR %d******\n",floor);
            }
            else if(floor==4)
            {
                     for(int i=present;i<floor;i++)
                     {
                               printf("%d ↑\n",i);
                     }
                     printf("the door is opening\n");
                     printf("******FLOOR %d*******\n",floor);
            }
            else if(floor==5)
            {
                     for(int i=present;i<floor;i++)
                     {
                               printf("%d ↑\n",i);
                     }
                     printf("the door is opening\n");
                     printf("******FLOOR %d********\n",floor);
            }
            else if(floor==6)
            {
                     for(int i=present;i<floor;i++)
                     {
                               printf("%d ↑\n",i);
                     }
                     printf("the door is opening\n");
                     printf("*****FLOOR %d*******\n",floor);
            }
            else
            {
                     printf("invalid floor\n");
            }
return;
}





void down(int floor,int present)
{
            if(floor==0)
            {
                    for(int i=present;i>floor;i--)
                    {
                              printf("%d ↓\n",i);
                    }
                    printf("opening the door\n");
                    printf("******FLOOR %d*****\n",floor);
            }
            else if(floor==1)
            {
                    for(int i=present;i>floor;i--)
                    {
                              printf("%d ↓\n",i);
                    }
                    printf("opening the door\n");
                    printf("*****FLOOR %d*****\n",floor);
            }
            else if(floor==2)
            {
                    for(int i=present;i>floor;i--)
                    {
                              printf("%d ↓\n",i);
                    }
                    printf("opening the door\n");
                    printf("*****FLOOR %d******\n",floor); 
            }
            else if(floor==3)
            {
                    for(int i=present;i>floor;i--)
                    {
                              printf("%d ↓\n",i);
                    }

                    printf("opening the door\n");
                    printf("******FLOOR %d*****\n",floor);
            }
            else if(floor==4)
            {
                    for(int i=present;i>floor;i--)
                    {
                              printf("%d ↓\n",i);
                    }
                    printf("opening the door\n");
                    printf("*****FLOOR %d*******\n",floor);
            }
            else if(floor==5)
            {
                    for(int i=present;i>floor;i--)
                    {
                              printf("%d ↓\n",i);
                    }
                    printf("opening the door\n");
                    printf("*******FLOOR %d******\n",floor); 
            }
return;
}
