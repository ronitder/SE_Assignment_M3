/*.Accept the input month number and print number of days in that
month*/


#include<stdio.h>
main()
{
	int month;
	printf("\n\n\t Enter month : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1 :
			printf("\n\n\t january  days: 31");
            break;
		case 2 :printf("\n\n\t febuary  days: 28");
            break;
		case 3 :printf("\n\n\t March  days: 31");
            break;
		case 4 :printf("\n\n\t April  days: 30");
            	break;
		case 5 :printf("\n\n\t may  days: 31");
            	break;
		case 6 :printf("\n\n\t June  days: 30");
            	break;
		case 7 :printf("\n\n\t July  days: 31");
            	break;
		case 8 :printf("\n\n\t August  days: 31");
           		break;
		case 9 :printf("\n\n\t September  days: 30");
            	break;
		case 10 :printf("\n\n\t October  days: 31");
            	break;
		case 11 :printf("\n\n\t November  days: 31");
            	break;
		case 12 :printf("\n\n\t December  days: 31");
            	break;
        default:printf("\n\n\t try again !");
	}
}
