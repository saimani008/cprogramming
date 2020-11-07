#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef union
{
      unsigned char Address[4];
      unsigned long numAddr;
} IP_ADDRESS;


int main()
{
      IP_ADDRESS adrs;
      char* parse;
      char ip[16] = "192.168.0.255";
      parse = strtok(ip,".");
      adrs.Address[3] = strtol(parse,(char**)NULL,10);
      for(int i=2;i>=0;i--)
      {
           parse = strtok(NULL,".");
           adrs.Address[i] = strtol(parse,(char**)NULL,10);
      }
      printf("ip in decimal :%d.%d.%d.%d\n",adrs.Address[3],adrs.Address[2],adrs.Address[1],adrs.Address[0]);
      printf("ip address in long : %lu\n",adrs.numAddr);
return 0;
}
 
