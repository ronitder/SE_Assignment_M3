/*15.Calculate sum of 10 numbers using of while loop*/
#include<stdio.h>
main()
{
	int i,n,sum=0;
	i=0;
	while(i<10)
	{
		printf("\n\n\t enter numbers : ");
		scanf("%d",&n);
		sum+=n;
		i++;
	}
	printf("\n\n\t 10 numbers sum : %d",sum);
}
