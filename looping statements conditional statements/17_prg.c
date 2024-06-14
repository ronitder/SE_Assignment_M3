2/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include<stdio.h>
main()
{
	int i,j=0,k=0,n;
	i=1;
	printf("\n\n\t enter 5 numbers ");
	while(i<=5)
	{
		printf("\n\n\t enter numbers : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			j++;
		}
		else
		{
			k++;
		}
			i++;
	}
	
	printf("\n\n\t number of even number : %d",j);
	printf("\n\n\t number of odd number : %d",k);
}
