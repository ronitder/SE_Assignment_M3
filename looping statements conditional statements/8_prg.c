/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/
#include<stdio.h>
main()
{
	int num1,num2;
	printf("\n\n\t input number : ");
	scanf("%d",&num1);
	printf("\n\n\t input number : ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("\n %d is maximum",num1);
	}
	else
	{
		printf("\n %d is meximum",num2);
	} 
}
