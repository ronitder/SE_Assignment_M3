/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
main()
{
	int i,j=0,k=0,sum=0,summ=0;
	
	for(i=1;i<=10;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=2;i<=10;i=i+2)
	{
		printf(" %d",i);
		j++;
		sum=sum+i;
	}
	printf("\n");
	for(i=1;i<=10;i=i+2)
	{
		printf(" %d",i);
		k++;
		summ=summ+i;
	}
	printf("\n\n\t total even number is : %d",j);
	printf("\n\n\t total odd number is : %d",k);
	
	printf("\n\n\t sum of even number : %d",sum);
	printf("\n\n\t sum of odd number : %d",summ);
}

