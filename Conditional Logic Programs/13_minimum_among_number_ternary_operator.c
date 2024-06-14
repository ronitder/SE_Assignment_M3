/*.WAP to find minimum number among 3 numbers using ternary operator*/

#include<stdio.h>
main()
{
	int number1,number2,number3,minimum;
	printf("\n\n\t enter 1st number:");
	scanf("%d",&number1);
	printf("\n\n\t enter 2nd number :");
	scanf("%d",&number2);
	printf("\n\n\t enter 3rd number :");
	scanf("%d",&number3);
	minimum=(number1<number2)?((number1<number3)?number1:number3):((number2<number3)?number2:number3);
	
	printf("\n\n\t minimum number:%d",minimum);
}
