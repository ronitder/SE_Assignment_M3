/*22.calculate compound interest(compound interest formula:
a.formula to calculate compound interest annually is given by:
 amount=p(1+r/100)t
b.compound interest=amount-p*/

#include<stdio.h>
main()
{
	//a)
	int p,r,t,amount,compound_interest;
	printf("\n\n\t enter p value:");
	scanf("%d",&p);
	
	printf("\n\n\t enter value:");
	scanf("%d",&r);
	
	printf("\n\n\t enter t value:");
	scanf("%d",&t);
	
	amount=p*1+r/100*t;
	printf("\n\n\t amount is:%d",amount);
	
	//b)
	compound_interest=amount-p;
	printf("\n\n\t compound interest:%d",compound_interest);
}
