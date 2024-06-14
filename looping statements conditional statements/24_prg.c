/*24. 1 + 2 + 3 + 4 + 5 + ... + n*/
#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("\n\n\t enter number for series : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n\n\t %d",sum);
}
