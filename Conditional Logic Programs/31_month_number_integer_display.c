/*Write a program in C to read any Month Number in integer and display the
number of days for this month*/


#include<stdio.h>
main()
{
	int month;
	printf("\n\n\t enter month:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("\n\n\t january days : 31");
			break;
		case 2:
			printf("\n\n\t january days : 28");
			break;
		case 3:
			printf("\n\n\t march days : 31");
			break;
		case 4:
			printf("\n\n\t april days : 30");
			break;
		case 5:
			printf("\n\n\t may days : 31");
			break;
		case 6:
			printf("\n\n\t june days : 30");
			break;
		case 7:
			printf("\n\n\t july days : 31");
			break;
		case 8:
			printf("\n\n\t august days : 31");
			break;
		case 9:
			printf("\n\n\t september days : 30");
			break;
		case 10:
			printf("\n\n\t october days : 31");
			break;
		case 11:
			printf("\n\n\t november days : 31");
			break;
		case 12:
			printf("\n\n\t december days : 31");
			break;
		default:printff("\n\n\t try again !");											
	}
}
