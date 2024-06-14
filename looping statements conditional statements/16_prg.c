/*16.Calculate sum of 10 numbers using of while loop*/
#include<stdio.h>
main()
{
	int i,n,sum;
	printf("\n\n\t enter numbers : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\n\n\t sum of natural number : %d",sum-1);
}
