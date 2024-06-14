/*(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/
#include<stdio.h>
main()
{
	int n,i,j,sum=0,inner_sum;
	printf("\n\n\t enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		inner_sum=0;
		
		for(j=0;j<=i;j++)
		{
			inner_sum+=j;
		}
		sum+=inner_sum;
	}
	printf("\n\n\t %d",sum);
}
