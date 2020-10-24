#include<stdio.h>
#define TAX 8.00
int main()
{
int quantity,price,subtotal,discount,sales_tax,discount_percent,total_sales,taxable;
printf("Total sales bill\n");
printf("quantity:");
scanf("%d",&quantity);
printf("price per item :");
scanf("%d",&price);
printf("discount percent:");
scanf("%d",&discount_percent);
subtotal = price*quantity;
discount  = subtotal*discount_percent/100;
taxable  = subtotal-discount;
sales_tax= taxable*TAX/100;
total_sales = sales_tax+taxable;
printf("--------------TOTAL BILL----------------\n");
printf("subtotal:%d\n",subtotal);
printf("discount:%d\n",discount);
printf("sales_tax:%d\n",sales_tax);
printf("total_sales:%d\n",total_sales);
printf("~~~~~~~~~~~THANK  YOU~~~~~~~~~~~~~\n");
printf("~~~~~~~~~~~VIST AGAIN~~~~~~~~~~~~~\n");
return 0;
}

