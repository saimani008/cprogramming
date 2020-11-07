#include<stdio.h>
double average(int n,int a[*]);
int main()
{
     int n;
     double avg;
     printf("enter the size of the array :");
     scanf("%d",&n);
     int arr[n],i;
     for(i=0;i<n;i++)
     {
         printf("enter number -%2d",i+1);
         scanf("%d",&arr[i]);
     }
     avg = average(n,arr); 
     printf("the average of the array elements is %lf ",avg);
   
return 0;
}


double average(int n,int array[n])
{
     int i,total = 0;
     double avg;
     for(i=0;i<n;i++)
     {
         total = total+array[i];
     }
     avg = (double)total/n;
return avg;
}
    
