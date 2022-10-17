#include<stdio.h>

int main()
{
	int count = 0;
	char answer = 'n';

	do {

		printf("Proceed with entry: ");
		scanf("%c", &answer);

	} while (answer == 'y');

	

	printf("Printed %d times", count);
	

	return 0;
}