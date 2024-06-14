//covert days into months

#include<stdio.h>
main()
{
	int days,month;
	
	printf("\n\n\t enter days:");
	scanf("%d",&days);
	
	month=days/30;
	days=days%30;
	printf("\n\n\t month:%d days:%d ",month,days);
}
