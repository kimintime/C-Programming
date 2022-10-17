#include<stdio.h>

int main()
{
	FILE *opening; 
	char filename[] = "phonedir.txt";
	int count = 0;
	int i = 0, sum = 0, linesleft = 0;
	char answer;
	char c;
	
	struct person {
		char firstname[21];
		char lastname[21];
		char phone[21];
	};
	
	struct person person_list[50];


	do {

	 	printf("Enter first name: ");
		scanf("%s", &person_list[count].firstname[0]);
		
		printf("Enter last name: ");
		scanf("%s", &person_list[count].lastname[0]);
		
		printf("Enter telephone number: ");
		scanf("%s", &person_list[count].phone[0]);

		count = count + 1;

		printf("Proceed with entry:");
		scanf(" %c", &answer);

		printf("You selectected %c\n", answer);

	 } while (answer == 'y');

	 if((opening = fopen(filename, "a")) == NULL) {

		printf("Error opening file.");
		return 0;
		}
	
	else {

		for(i = 0; i < count; i++) {

			fprintf(opening, "%s %s\t%s\n", person_list[i].firstname, person_list[i].lastname, person_list[i].phone);

		}

		printf("Successfully saved the data.\n");

		fclose(opening);

	}

	if((opening = fopen(filename, "r")) == NULL) {

		printf("Error opening file.");
		return 0;
	}
	
	else {

		while ((c = fgetc(opening)) != EOF)

		{
			if (c == '\n')

				sum++;
		}

		linesleft = 50 - sum;

		printf("You have %d entries remaining.\n", linesleft);

	}
		
	
	fclose(opening);
	
	return 0;
}



