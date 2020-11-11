#include<stdio.h>
int  main()
{    
   float harmonic = 0;
   int number;
   printf("Enter the number to find the harmonic series :"); 
   scanf("%d",&number);
   for(float i=1;i<=number;i++)
   {
     harmonic  =  harmonic + 1/i;
     
   }
   printf("the harmonic series of %d is :%f\n",number ,harmonic);
return 0;
}

