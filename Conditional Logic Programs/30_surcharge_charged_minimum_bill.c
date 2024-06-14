/*.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256*/

#include<stdio.h>
main()
{
	int customer_id,unit;
	float amont,gst;
	char name[20];
	printf("\n\t enter customer id:");
	scanf("%d",&customer_id);
	printf("\n\t enter customer name:");
	scanf("%s",&name);
	printf("\n\t enter using unit:");
	scanf("%d",&unit);
	
	if(unit>800)
	{
	amont=unit*2;
	printf("\n\t unit: %d price :2 total :%.2f",unit,amont);
	}
	if(unit>600)
	{
	amont=unit*1.88;
	printf("\n\t unit: %d price :1.88 total :%.2f",unit,amont);
    }
	if(unit>350)
	{
	amont=unit*1.50;
	printf("\n\t unit: %d price :1.50 total :%.2f",unit,amont);
    }
    else
    {
    amont=unit*1;
    printf("\n\t unit : %d price:1 total :%.2f",unit,amont);
	}
	  if (amont>=800)
	  {
	  	gst=amont*18/100+amont;
	  	printf("\n\t total bill :%.2f",amont,gst);
	  }
}
