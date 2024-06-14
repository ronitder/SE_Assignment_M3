 /*WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array */
//multiplication
#include<stdio.h>
main()
{
	int m1[2][2],m2[2][2],i, j, k, mul[2][2];
	printf("\n\n\t...............matrix-1..................\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("m1[%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
		
	}
	printf("\n\n\t...............matrix-2..................\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("m2[%d][%d] : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\n\n\t...............matrix-1..................\n\n");	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\t...............matrix-1..................\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			{
				mul[i][j]=0;
				for(k=0;k<2;k++)
				mul[i][j]+=m1[i][k]*m2[k][j];
			}
	}
	printf("\n");
	printf("\n\n\t...............multiplication..................\n\n");
		for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf(" %d",mul[i][j]);
			}
			printf("\n");
	}	
}
