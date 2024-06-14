/*7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746*/
#include<stdio.h>
main()
{
	int n,m,reverse;
	printf("\n\n\t enter number to reverse : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		m=n%10;
		reverse=reverse*10+m;
		n=n/10;
		
	}
	printf("\n\n\t reverse num is : %d",reverse);
}
