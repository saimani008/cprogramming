#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int **createtable();
void settable(int **);
void process(int **);
int rowmin(int*);
int rowmax(int*);;
float rowave(int*);
int small(int,int);
int large(int,int);
int main()
{
    int **t;
    t = createtable();
    settable(t);
    process(t);
    return 0;
} 


int **createtable()
{
    int rows,cols,i;
    int ** t;
    printf("how many rows you want in the table\n");
    scanf("%d",&rows);
    t = (int**)calloc(rows+1,sizeof(int*));
    for(i=0;i<rows;i++)
    {
        printf("how many column you want in row %d",i+1);
        scanf("%d",&cols);
        t[i] = (int*)calloc(cols+1,sizeof(int));
        t[1][0] = cols;
    }
    t[i] = NULL;
return t;
}




void settable(int** t)
{
    int i=0,j;
    printf("enter the elements of each row and press enter");
    while(t[i]!=NULL)
    {
        printf("%d(%d integers)",i+1,t[1][0]);
        for(j=i;j<=*t[i];j++)
        {
            scanf("%d",t[i]+j);
            i++;
        }
    }
return;
}




void process(int **t)
{
    int i=0,rmin,rmax;
    float rave;
    while(t[i] != 0)
    {
        rmin = rowmin(t[i]);
        rmax = rowmax(t[i]);
        rave = rowave(t[i]);
        printf("\n the minimum ,maximum and average of row %d are",i+1);
        printf("\n%d %d %f",rmin,rmax,rave);
        i++;
    }
return;
}



int rowmin(int * row_pointer)
{
      int rmin = INT_MAX,i;
      for(i=1;i<=*row_pointer;i++)
      {
        rmin = small(rmin, * (row_pointer+i));
      }
return rmin;
}


int rowmax(int * row_pointer)
{
      int rmax = INT_MAX,j;
      for(j=0;j<=*row_pointer;j++)
      {
         rmax = large(rmax, * (row_pointer+j));
     }
return rmax;
}

float rowave(int * row_pointer)
{
     float sum =0.0,rave;
     int j;
     for(j=1;j<= * row_pointer;j++)
     {
         sum = sum+(float)*(row_pointer+j);
         rave = sum/(float) *row_pointer;
      }
return rave;
}



int small(int a,int b)
{
     if(a<b)
     {
       return a;
     }
     else
     {
       return b;
     }
return 0;
}


int large(int a,int b)
{
     if(a>b)
     {
       return a;
     }
     else
     {
        return b;
      }
return 0;
}
