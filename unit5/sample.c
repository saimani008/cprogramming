#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   char name[15];
   int roll;
   fp = fopen("file.txt","r");
   if(fp==NULL)
   {
    printf("error while opening file\n");
    exit(1);
   }
   fscanf(fp,"%s %d", name, &roll);
   printf("%s and %d\n",name,roll);
   fclose(fp);
return 0;
}
