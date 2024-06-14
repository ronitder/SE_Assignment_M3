//WAP to print factorial of given number*/ 
#include<stdio.h>
main()
{
	int i,n,fact;
	printf("\n\n\t input any number for fectorial value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n\n\t your factorial number : %d",fact);
}
