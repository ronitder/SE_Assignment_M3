/*Accept 5 employees name and salary and count average and total salary*/

#include<stdio.h>
main()
{
	char a[20],b[20],c[20],d[20],e[20];
	float salary1,salary2,salary3,salary4,salary5,average,total_salary;
	
	
	printf("\n\n\t enter 1st employees name:");
	scanf("%s",&a);
	printf("\n\n\t enter %s salary:$",a);
	scanf("%f",&salary1);
	printf("\n\n\t enter 2sd employees name:");
	scanf("%s",&b);
	printf("\n\n\t enter %s salary:$",b);
	scanf("%f",&salary2);
	printf("\n\n\t enter 3th employees name:");
	scanf("%s",&c);
	printf("\n\n\t enter %s salary:$",c);
	scanf("%f",&salary3);
	printf("\n\n\t enter 4th employees name:");
	scanf("%s",&d);
	printf("\n\n\t enter %s salary:$",d);
	scanf("%f",&salary4);
	printf("\n\n\t enter 5th employees name:");
	scanf("%s",&e);
	printf("\n\n\t enter %s salary:$",e);
	scanf("%f",&salary5);
	
	total_salary=salary1+salary2+salary3+salary4+salary5;
	printf("\n\n\t total_salary:$%2f",total_salary);
	average=total_salary/5;
	printf("\n\n\t average_salary:$%2f",average);
	
}
