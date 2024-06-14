/*WAP to check whether a number is negative, positive or zero*/

#include<stdio.h>
main()
{
	int number;
	printf("\n\n\t enter whether number:");
	scanf("%d",&number);
	if (number>0)
	printf("\n\n\t %d whether number is positive:",number);
	else if (number<0)
	printf("\n\n\t %d  whether number is nagative:",number);
	
	else
	printf("\n\n\t number is zero");
}
