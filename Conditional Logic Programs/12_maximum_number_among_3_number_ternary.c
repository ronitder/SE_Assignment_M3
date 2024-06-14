/*WAP to find maximum number among 3 numbers using ternary operator*/

#include<stdio.h>
main()
{
	int number1,number2,number3,maximum;
	printf("\n\n\t enter 1st number:");
	scanf("%d",&number1);
	printf("\n\n\t enter 2nd number:");
	scanf("%d",&number2);
	printf("\n\n\t emter 3rd number:");
	scanf("%d",&number3);
	maximum=(number1>number2)?((number1>number3)?number1:number3):((number2>number3)?number2:number3);
	
	printf ("\n\n\t maximum:%d",maximum);
}
