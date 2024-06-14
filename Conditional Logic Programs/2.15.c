/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
main()
{
	int maths,phy,chem,total,total12;
	
	
	printf("\n\n\t enter marks in physics:");
	scanf("%d",&phy);
	printf("\n\n\t enter marks in maths:");
	scanf("%d",&maths);
	printf("\n\n\t enter marks in chemistry:");
	scanf("%d",&chem);
	total=phy+maths+chem;
	peintf("\n\n\t marks:%d",total);
	total12=phy+maths+chem;
	printf("\n\n\t total marks(phy&maths):%d",total12);
	
	if (phy>=65&&chem>=55&&maths>=50&&total>=190)
	
	  printf("\n\n\t candidate is eligible");
	else if(total12>=140)
	  printf("\n\n\t candidate is eligible");
	else
	  printf("\n\n\t candidate is not eligible");
	
	
}
