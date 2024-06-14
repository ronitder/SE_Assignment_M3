/*.Write a C program to check whether a triangle can be formed with the given
values for the angles*/

#include<stdio.h>
main()
{
	int angle1,angle2,angle3,a;
	printf("\n\n\t 1st angle:");
	scanf("%d",&angle1);
	printf("\n\n\t 2sd angle:");
	scanf("%d",&angle2);
	printf("\n\n\t 3rd angle:");
	scanf("%d",&angle3);
	a=angle1+angle2+angle3;
	if(a==180)
	printf("\n\n\t triangle angles %d,%d,and %d can be formed",angle1,angle2,angle3);
	else
	printf("\n\n\t triangle angle %d,%d,and %d can be formed",angle1,angle2,angle3);
	
}
