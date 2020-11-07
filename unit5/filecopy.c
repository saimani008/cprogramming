#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE  *fp1,*fp2;
   char filename1[20],filename2[20],str[30],filecopied[10];
   printf("\n enter the name of the first file name:");
   gets(filename1);
   printf("\n enter the name of the second file name:");
   gets(filename2);
   fflush(stdin);
   printf("FILE COPIED");
   gets(filecopied);
   fflush(stdin);
   if((fp1=fopen(filename1,"r"))==0)
   {
      printf("\n error opening the first file");
      exit(1); 
   }
   if((fp2=fopen(filename2,"w"))==0)
   {
      printf("\n error opening in second file");
      exit(1);
   }
   while((fgets(str,sizeof(str),fp1))!=NULL)
   {
     fputs(str,fp2);
   }
   fclose(fp1);
   fclose(fp2);
return 0;
}
