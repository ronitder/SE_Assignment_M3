/* WAP Find out length of string without using inbuilt function */
#include<stdio.h>
main()
{
	char str[20];
	int len;
	printf("\n\n\t enter string : ");
	scanf("%s",&str);
	len=strlen(str);
	printf("\n\n\t string length : %d",len);
}
