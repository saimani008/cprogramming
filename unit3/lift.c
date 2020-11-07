#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#define TOPFLOOR 15
#define DELAY_FACTOR 1000

typedef enum{OUT,IN} STATUS;
typedef enum{DOWN,STOP,UP} D_STATUS;
typedef struct 
{
             int present_floor;
             STATUS *btn;
} ELEVATOR;

void initialize(ELEVATOR* el);
void start(ELEVATOR* el);
void stop(ELEVATOR* el);
void move_el(ELEVATOR* el);
bool up_req(ELEVATOR* el);
bool down_req(ELEVATOR* el);
void up(ELEVATOR* el);
void down(ELEVATOR* el);
void delay(int n);


void initialize(ELEVATOR* el)
{
       int i;
       el->btn =calloc(TOPFLOOR+1,sizeof(STATUS));
       for(i=0;i<=TOPFLOOR;i++)
       {
             el->btn[i] = OUT;
             el->present_floor = 1;
       }
return;
}


void start(ELEVATOR* el)
{
      char buff[80];
      int floor;
      char *pstin;
      printf("the elevator starts from basement(0)");
      printf(" to  %d",TOPFLOOR);
      printf("\n\ntype the floor number and press return to start");
      printf("\n  *in case of non new floors,press the return key or EOF to exit");
      printf("\n\nplease enter the floor number:");
      fgets(buff,80,stdin);
                 pstin =buff;
                 while(*pstin!='\n')
                 {
                                   while(*pstin==' ')
                                   {
                                   pstin++;
                                   if(!isdigit(*pstin))
                                    {
                                             printf("\nFloor number you entered is invalid %c \n",*pstin);
                                             pstin++;
                                    }
                                    else
                                    {
                                             sscanf(pstin,"%d",&floor);
                                             if(floor==el->present_floor)
                                             {
                                                    printf("\n\ayou are already on the floor  %d",el->present_floor);
                                             }
                                             else
                                             {
                                                if(floor<0||floor>TOPFLOOR)
                                                {
                                                   printf("\n \a %d you have entered invalid floor number",floor);
                                                }
                                                else
                                                {
                                                    el->btn[floor] = IN;
                                                    while(isdigit(*pstin))
                                                    {
                                                        pstin++;
                                                    }
                                                }
                                             }
                                   }
                            }
                 }
                 move_el(el);
                 printf("\n\nEnter the floor number");
return;
}




void move_el(ELEVATOR* el)
{
       D_STATUS direction = STOP;

       bool aup;
       bool adown;
       aup = up_req(el);
       adown = down_req(el);
       if(direction==UP)
       {
              if(!aup&&adown)
              {
                  direction = DOWN;
              }
              else if(!aup&&!adown)
              {
                  direction = STOP;
              }
       }
       else if(direction==DOWN)
       {
             if(!adown&&aup)
             {
                 direction = UP;
             }
             else
             {
                 if(!adown&&!aup)
                 {
                     direction = STOP;
                 }
             }
       }
       else if(direction==STOP)
       {
            if(aup)
            {
                direction = UP;
            }
            else if(adown)
            {
               direction = DOWN;
            }
       }
       else if(direction==UP)
       {
            up(el);
       }          
       else
       {
            if(direction==DOWN)
             {
                down(el);
             }
             else
             {
                printf("***BUTTON NOT PRESSED***\n");
             }
       }
return;
}



void up(ELEVATOR*el)
{
    printf("\n the door is closing---");
    printf("we are moving upwards");
    (el->present_floor)++;
    while(el->btn[el->present_floor]!=IN)
    {
        printf("\n");
        delay(2);
        printf("\n crossing the floor %d",el->present_floor);
        printf("\n");
        delay(2);
        (el->present_floor)++;
    }
    el->btn[el->present_floor]=OUT;
    printf("\n the door is opening---");
    printf("\n");
    printf("\n*********FLOOR %d*********",el->present_floor);
    printf("\n");
    delay(4);
return;
}


void down(ELEVATOR* el)
{
     printf("\n the door is closing---");
     printf("we are moving downwards");
     (el->present_floor)--;
     while(el->btn[el->present_floor]!=IN)
     {
          printf("\n");
          delay(2);
          printf("\n crossing the floor %d",el->present_floor);
          printf("\n");
          delay(2);
          (el->present_floor)--;
     }
     el->btn[el->present_floor]=OUT;
     printf("\n the door is opening---");
     printf("\n");
     printf("\n ***FLOOR %d ***",el->present_floor);
     printf("\n");
     delay(4);
return;
}



bool up_req(ELEVATOR * el)
{
       int chk;
       bool any = false;
       for(chk=el->present_floor;chk<=TOPFLOOR&&!any;chk++)
       {
                any = (el->btn[chk]==IN);
       }
return any;
}


bool down_req(ELEVATOR* el)
{
   bool any = false;
   int chk;
   for(chk=el->present_floor;chk>=0;chk--)
   {
          any = any||(el->btn[chk]==IN);
   }
return any;
}



void delay(int time)
{
    long i;
    for(i=0;i<(time*DELAY_FACTOR);i++)
    {
          return;
    }
return;
}


void stop(ELEVATOR *el)
{
    free(el->btn);
return;
}


int main()
{
   ELEVATOR el;
   initialize(&el);
   start(&el);
   stop(&el);
return 0;
}
