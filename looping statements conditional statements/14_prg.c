/*14.Accept 5 numbers from user and find those numbers factorials*/

#include<stdio.h>
main()
{
	int i,n[5],fact=0;
	for(i=0;i<5;i++)
	{
	printf("\n\n\t enter any number : ");
	scanf("%d",&n[i]);
	}
	i=0;
	while(i<=n[i])
	{ 
	 	fact=fact*n[i];
	 
	 	i++;
	 	printf("\n\n\t fectorial number is :%d ",fact);
	}
}
