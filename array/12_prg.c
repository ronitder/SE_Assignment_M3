/* WAP to accept 5 students name and store it in array*/
#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t enter name : ");
		scanf("%s",&name[i][20]);
	}
	printf("\n\n\t name[1] : %s",name[1]);
	printf("\n\n\t name[2] : %s",name[2]);
	printf("\n\n\t name[3] : %s",name[3]);
	printf("\n\n\t name[4] : %s",name[4]);
	printf("\n\n\t name[5] : %s",name[5]);
}
