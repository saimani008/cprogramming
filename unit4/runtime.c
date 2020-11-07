#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr ,*tbl;
   int size ;
   printf("enter the size of the table to allocate:\n");
   scanf("%d",&size);
   printf("\n");
   if((tbl = (int*)malloc(size*sizeof(int)))==NULL)
   {
      printf("memory not supported\n");
      exit(1);
   }
   printf("\n the address of first byte is : %d\n",tbl);
   printf("\n enter the table values :\n");
   for(ptr=tbl;ptr<tbl+size;ptr++)
   {
     scanf("%d",ptr);
    }
   for(ptr=tbl+size-1;ptr>=tbl;ptr--)
   {
     printf("%d is stored at addrress %d\n",*ptr,ptr);
   }
return 0;
}
