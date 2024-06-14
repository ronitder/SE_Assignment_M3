//Convert years into days and months

#include<stdio.h>
main()
{
	int days,month,year;
	
	printf("\n\n\t enter year:");
	scanf("%d",&year);
	
	month=year*12;
	days=month*30;
	printf("\n\n\t day:%d month:%d",days,month);
}
