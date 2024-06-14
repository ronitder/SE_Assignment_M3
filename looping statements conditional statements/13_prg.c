/*calculate the Factorial of a Given Number using while loop*/
#include<stdio.h>
main()
{
	int i,n,fact;
	i=1;
	printf("\n\n\t enter any number : ");
	scanf("%d",&n);
	while(i<=n)
	{ 
	 	fact=fact*i;
	 
	 	i++;
	}
		printf("\n\n\t fectorial number is :%d ",fact);
}
