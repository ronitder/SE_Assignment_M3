/*.WAP to find number is even or odd using ternary operator*/

#include<stdio.h>
main()
{
	int number;
	printf("\n\n\t enter number:");
	scanf("%d",&number);
	if (number%2==0)
	printf("\n\n\t %d number is even",number);
	else
	printf("\n\n\t %d number is odd",number);
}
