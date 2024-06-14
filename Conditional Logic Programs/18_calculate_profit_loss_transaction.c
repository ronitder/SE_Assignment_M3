/*Write a C program to calculate profit and loss on a transaction*/

#include<stdio.h>
main()
{
	int profit,loss,sell_price,a_price;
	printf("\n\n\t selling price:");
	scanf("%d",&sell_price);
	peintf("\n\n\t actual price:");
	scanf("%d",&a_price);
	profit=sell_price - a_price;
	loss=sell_price - a_price;
	if(a_price<sell_price)
	printf("\n\n\t profit:%d",profit);
	else
	printf("\n\n\t loss:%d",loss);
}
