#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char fname[80],iname[80];
   int marks ;
   FILE*read;
   if(!(read =fopen("data.txt","r")))
   {
     printf("this file can not be opened or not existed\n");
     exit(100);
   }
   printf("the student details are:\n");
   printf("FNAME\tLNAME\tMARKS\n");
   printf("-----\t----\t-----\n");
   while(fscanf(read,"%s %s %d",fname,iname,&marks)==3)
   {
    printf("%s\t%s\t%d\n",fname,iname,marks);
   }
  fclose(read);
return 0;
}
