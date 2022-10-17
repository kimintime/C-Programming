#include <stdio.h>

int main()
{
	/*Calculate the square of a given number*/
	
	int number, number_squared;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	number_squared = number * number;
	
	printf("The square of the number you entered is %d \n", number_squared);
	
	return 0;
	
}
	
	