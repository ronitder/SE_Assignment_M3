/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/
#include<stdio.h>
main()
{
	int i,n[2],sum;
	printf("\n\n\t enter two number");
	for(i=1;i<=2;i++)
	{
		printf("\n\n\t enter num : ");
		scanf("%d",&n[i]);
	}
printf("\n press 1 for ascending.");
printf("\n press 2 for descending.");

printf("\n\n\t enter your choise : ");
scanf("%d",&sum);
	if(sum==1)
	{
		if(n[2]>n[1])
		{
			printf("\n\n\t ascending number %d %d",n[1],n[2]);
		}
		else
		{
			printf("\n\n\t ascending number %d %d",n[2],n[1]);	
		}	
	}
	if(sum==2)
	{
		if(n[2]>n[1])
		{
			printf("\n\n\t descending number %d %d",n[2],n[1]);
		}
		else 
		{
			printf("\n\n\t descending number %d %d",n[1],n[2]);
		}	
	}
}
