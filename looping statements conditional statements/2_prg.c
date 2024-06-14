/*WAP to accept 5 numbers from user and display all numbers*/
#include<stdio.h>
main()
{
	int i,n[5];
	printf("\n enter any 5 numbers");
	for(i=0;i<5;i++)
	{
		
		printf("\n enter any number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d",n[i]);
	}
}
