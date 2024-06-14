/*C Program to Check Uppercase or Lowercase or Digit or Special
Character*/

#include<stdio.h>
main()
{
	char character;
	printf("\n\n\t enter character :");
	scanf("%c",&character);
	
	if(character>='a')
	printf("\n\n\t %c is character lowercase",character);
	else if (character>='a')
	printf("\n\n\t %c is character uppercase",character);
	else if (character>='0')
	printf("\n\n\t %c is character digit",character);
	else
	printf("\n\n\t is character special character ",character);
}
