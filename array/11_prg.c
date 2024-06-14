/* WAP to accept 5 numbers from user and display in reverse order using for 
loop and array */
#include <stdio.h>
main() 
{
    int numbers[5],i;
    printf("\n Enter 5 numbers:");
    for(i = 0; i < 5; i++) 
	{
        printf("\n\n\t Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\n The numbers in reverse order are");
    for(i = 4; i >= 0; i--) 
	{
        printf("\n\n\t %d ", numbers[i]);
    }
    printf("\n");
}

