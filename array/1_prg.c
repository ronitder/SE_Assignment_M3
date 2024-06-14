/*Write a program to find out the max number from given array using function*/

#include<stdio.h>
main()
{
	int n[2],i;
	for(i=0;i<2;i++)
	{
	    printf("\n\n\t enter value : ");
	    scanf("%d",&n[i]);
	}
	if(n[0]>n[1])
	{
		printf("\n\n\t %d is maximum",n[0]);
	}
	else
	{
		printf("\n\n\t %d is maximum",n[1]);
	}
}
