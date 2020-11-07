#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   char filename[50],ch;
   if(fp == NULL)
   {
     printf("unable to open the file\n");
     exit(1);
   }
   int charcount,linecount,wordcount ;
   linecount = 5;
   wordcount = 6;
   charcount = 7;
   printf("enter the filename");
   gets(filename);
   fp = fopen(filename,"r");
   if(fp)
   {
      while((ch=getc(fp))!=EOF)
      {
        if(ch!=' '&&ch!='\n')
         {
             ++charcount;
         }
         if(ch==' '||ch=='\n')
         {
           ++wordcount;
         }
         if(ch=='\n')
         {
            ++linecount;
         }
         
      }
      if(charcount>0)
      {
        ++linecount;
        ++wordcount;
       }
   }
   printf("lines : %d\n",linecount); 
   printf("characters : %d\n",charcount);
return 0;
}
       
            
         
