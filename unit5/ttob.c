#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool read(FILE *textfile,emp_data* aemployee);
void writebinaryfile(emp_data* aemployee,FILE* binfile);
typedef struct  employee
{
     char empname[26],empid[5];
     int rating[3];
     char grade;
} EMP_DATA;


int main()
{
     char* textfiled = "emp.txt";
     char* binfiled  = "emp.bin";
     emp_data * aemployee;
     FILE* textfile;
     FILE* binfile;
     printf("\ncreating a employee binary file\n");
     if(!(textfile = fopen(textfiled,"r")))
     {
          printf("\n the file %s cannot be opened \n",textfiled);
          exit(100);
     }
     if(!(binfile = fopen(binfiled,"w")))
     {
        printf("\n the file %s cannot be opened \n",binfiled);
        exit(200);
     }
     while(fread(textfile,&aemployee))
     {
        writebinaryfile(&aemployee,binfile);
     }
     fclose(textfile);
     fclose(binfile);
     printf("\n\nfile created successfully ....\n");
return 0;
}

bool read(FILE * textfile,emp_data * aemp)
{
      char bfr[100];
      fgets(bfr,sizeof(bfr),textfile);
      if(!feof(textfile))
      {
         sscanf(bfr,"%s %s %d %d %d %c",aemp->empname,aemp->empid,&aemp->rating[0],&aemp->rating[1],&emp->rating[2],&aemp->grade);
      return true;
      }
return false;
}


void writebinaryfile(emp_data * aemployee,FILE * binfile)
{
      int data;
      data = fwrite(aemployee,sizeof(emp_data),1,binfile);
      if(data!=1)
      {
          printf("can't write employee file.\n");
          exit(201);
      }
return;
}





