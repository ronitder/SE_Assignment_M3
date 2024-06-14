/*18.Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50*/
#include<stdio.h>
main()
{
	int i,j;
	printf("enter any number : ");
	scanf("%d",&j);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d",j,i,j*i);
	}
}
