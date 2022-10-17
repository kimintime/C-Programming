#include<stdio.h>

int main()
{
	char firstname[15];
	char lastname[20];
	char filename[12];
	
	FILE *opening;  
	
	printf("The program saves your first and last name into a file.\n");
	printf("Enter your first name:");
	scanf("%s", &firstname[0]);
	
	printf("Enter your last name:");
	scanf("%s", &lastname[0]);
	
	printf("File where you want to save your name:");
	scanf("%s", &filename[0]);
	
	if ((opening = fopen(filename, "a")) == NULL) {
		printf("There were an error opening the file.");

		return 0;
	}

	else {

		fprintf(opening, "%s %s\n", firstname, lastname);

		fclose(opening);

		}
	
	printf("Successfully saved the data!\n");
	
	return 0;
}