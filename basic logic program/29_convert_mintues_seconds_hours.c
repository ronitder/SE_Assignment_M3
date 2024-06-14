//Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int mintues=60,seconds,hours=0;
	
	printf("\n\n\t minutes:%d",mintues);
	
	seconds=mintues*60;
	hours=mintues/60;
	printf("\n\n\t seconds:%d",seconds,hours);
	
}
