/*WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/

#include<stdio.h>
main()
{
	int n[2],i;
	char sum;
	printf("\n\n\t enter two num : ");
	for(i=0;i<2;i++)
	{
		printf("\n\n\t enter num : ");
		scanf("%d",&n[i]);
	}
	printf("\n\n\t press a for addition ");
	printf("\n\n\t press b for subtraction ");
	printf("\n\n\t press c for divition ");
	printf("\n\n\t press d for multiplecation ");
	printf("\n\n\t enter your sum : ");
	scanf(" %c",&sum);
	switch(sum)
	{
		case 'a': printf("\n\n\t %d",n[0]+n[1]);
				  break;
		case 'b': printf("\n\n\t %d",n[0]-n[1]);
				  break;
		case 'c': printf("\n\n\t %d",n[0]/n[1]);
				  break;
		case 'd': printf("\n\n\t %d",n[0]*n[1]);
				  break;
		default : printf("\n\n\t try another time");
				  break;
	}
}
