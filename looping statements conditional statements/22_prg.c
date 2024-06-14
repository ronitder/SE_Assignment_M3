/*. Accept 3 numbers from user using while loop and check each numbers
palindrome*/
#include <stdio.h>
main() 
{
    int num, i = 0;

    while (i < 3) 
	{
        printf("\n\n Enter number %d: ", i + 1);
        scanf("%d", &num);
        
        int reversedNum = 0, originalNum = num;
        while (num > 0) 
		{
            reversedNum = reversedNum * 10 + num % 10;
            num /= 10;
        }
        
		if(originalNum==reversedNum)
			printf("\n %d is palindrome ",reversedNum);
		else
			printf("\n %d is not palindrome ",reversedNum);	
        i++;
    }

   
}

