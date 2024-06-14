//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int i,n,sum=0,digit;
	printf("\n\n\t input any number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;		
	}
	printf("\n\n\t %d",sum+1);
}
