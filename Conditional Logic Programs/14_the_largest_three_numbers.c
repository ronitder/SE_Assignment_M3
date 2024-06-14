/*WAP to find the largest of three numbers*/

#include<stdio.h>
main()
{
	int number1,number2,number3,minimum;
	printf("\n\n\t enter 1st number:");
	scanf("%d",&number1);
	printf("\n\n\t enter 2nd number:");
	scanf("%d",&number2);
	printf("\n\n\t enter 3rd number:");
	scanf("%d",&number3);
	
if (number1>=number2||number1>=number3)
	{
		printf("\n\n\t largestnumber:%d",number1);
	}
	
	else if (number2 >= number1 and number2 >= number3)
	{
		printf("\n\n\t largestnumber:%d",number2);
	}
	else
	{
		printf("\n\n\t largestnumber:%d",number3);
	}
	
}
