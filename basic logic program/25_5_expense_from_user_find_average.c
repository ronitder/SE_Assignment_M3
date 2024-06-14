//accept 5 expence from user and find average of expense

#include<stdio.h>
main()
{
	float expense1,expense2,expense3,expense4,expense5,average;
	average;
	printf("\n\n\t 1 expense:");
	scanf("%f",&expense1);
	printf("\n\n\t 2 expense:");
	scanf("%f",&expense2);
	printf("\n\n\t 3 expense:");
	scanf("%f",&expense3);
	printf("\n\n\t 4 expense:");
	scanf("%f",&expense4);
	printf("\n\n\t 5 expense:");
	scanf("%f",&expense5);
	average=expense1+expense2+expense3+expense4+expense5/5;
	printf("\n\n\t average expense:2%f",average);
} 
