#include<stdio.h>
void towers_of_hanoi(int ,char,char,char);
int main()
{
     int n;
     printf("enter the number of disks :");
     scanf("%d",&n);
     printf("the sequence of moves involved int the towers of hanoi are :\n");
     towers_of_hanoi(n,'A','C','B');
return 0;
}

void towers_of_hanoi(int n,char frompeg,char topeg,char auxpeg)
{
      if(n==1)
      {
         printf("\n move disk 1 from peg %c to peg %c",frompeg,topeg);
         return;
      }
      towers_of_hanoi(n-1,frompeg,auxpeg,topeg);
      printf("\n move disk %d from peg %c to peg %c",n,frompeg,topeg);
      towers_of_hanoi(n-1,auxpeg,topeg,frompeg);
}
      


