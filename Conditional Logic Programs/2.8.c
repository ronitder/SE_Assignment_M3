/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
main()
{
	int height;
	printf("\n\n\t enter height:");
	scanf("%d",&height);
	if (height<150)
	printf("\n\n\t short:");
	else if (height<170)
	printf("\n\n\t normal: ");
	else if (height<190)
	printf("\n\n\t tall:");
	else
	printf("\n\n\t extra tall :");
}

