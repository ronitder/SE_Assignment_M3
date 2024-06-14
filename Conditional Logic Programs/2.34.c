//Accept month number and display month name

#include<stdio.h>
main()
{
	int month;
	printf("\n\n\t Enter month : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1 :
			printf("\n\n\t january");
            break;
		case 2 :printf("\n\n\t febuary");
            break;
		case 3 :printf("\n\n\t March");
            break;
		case 4 :printf("\n\n\t April");
            	break;
		case 5 :printf("\n\n\t may");
            	break;
		case 6 :printf("\n\n\t June");
            	break;
		case 7 :printf("\n\n\t July");
            	break;
		case 8 :printf("\n\n\t August");
           		break;
		case 9 :printf("\n\n\t September");
            	break;
		case 10 :printf("\n\n\t October");
            	break;
		case 11 :printf("\n\n\t November");
            	break;
		case 12 :printf("\n\n\t December");
            	break;
        default:printf("\n\n\t try again !");
	}
}
