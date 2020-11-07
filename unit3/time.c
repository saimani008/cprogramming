#include<stdio.h>

typedef struct
{
    int hour;
    int minute;
    int second;
} CLOCK;

void inc(CLOCK *clk);
void display(CLOCK *clk);


int main(void)
{

    int i;
    CLOCK clk = {12,30,01};
    while(1)
    {
        inc(&clk);
        display(&clk);
     }
return 0;
}

void inc(CLOCK *clk)
{
    (clk->second)++;
    if(clk->second==60)
    {
         clk->second = 0;
         (clk->minute)++;
         if(clk->minute==60)
          {
              clk->minute = 0;
              (clk->hour)++;
              if(clk->hour==24)
              {
                  clk->hour = 0;
              }
          }
     }
return;
}



void display(CLOCK *clk)
{
    printf("%02d:%02d:%02d\n",clk->hour,clk->minute,clk->second);
return;
}

