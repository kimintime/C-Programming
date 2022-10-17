#include <stdio.h>

int main()
{
	/*Display the factorial of a number.*/
	
	int i, variable = 0, factor = 1;
	
	printf("Enter an integer: ");
	scanf("%d", &variable);
	
	for(i = 1; i <= variable; ++i)
	{
		factor *= i;
	}

	printf("The factorial of %d is %d",variable, factor);
	
	return 0;
		
	}