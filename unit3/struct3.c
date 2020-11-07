#include<stdio.h>
int main()
{
         struct shop
         {
            char item[25];
            int quantity;
            int price;
         };

         struct shop sp = {"maggi",12,12};
         struct shop *ptr =&sp;
         printf("ITEM\t\tQUANTITY\tPRICE\t\t\n");
         printf("%s\t\t%d\t\t%d\t\t\n",ptr->item,ptr->quantity,ptr->price);
return 0;
}

