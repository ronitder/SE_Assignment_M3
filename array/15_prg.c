/* Store 5 numbers in array and sort it in ascending order*/

#include<stdio.h>
main()
{
	int i,j,n[5],tem;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t n[%d] : ",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++) 
	{
        for(j=0;j<5-i-1;j++)
		{
            if(n[j]>n[j+1])
			{
                tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
    printf("\n\n\t Numbers in ascending order: ");
    for(i=0;i<5;i++) 
	{
        printf("\n\n\t n[%d] : %d ",i,n[i]);
    }
}
