/*
 Write a program in C to find the maximum number of characters in a string.
*/

#include<stdio.h>
main()
{
	int i,max=0;
	char str[20];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;i++)
	{
		max++;
	}
	printf("\n\n\t maximum Number : %d",max);
}
