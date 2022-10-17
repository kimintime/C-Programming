#include<stdio.h>
#include<string.h>

int main()
{
	FILE *opening; 
	char filename[] = "phonedir.txt";
	char c;
	char firstname[21];
	char lastname[21];
	int i = 0;
	int count = 0;
	int resultfirst = 0, resultsecond = 0;
	
	struct person {
		char firstname[21];
		char lastname[21];
		char phone[21];
	}; 
	
	struct person person_list[50];

	printf("Enter first name: ");
	scanf("%s", &firstname[0]);
		
	printf("Enter last name: ");
	scanf("%s", &lastname[0]);

		
	if((opening = fopen(filename, "r")) == NULL) {
		
		printf("Error opening file.");
		return 0;
	}
	
	else {
		
		do 
		{
			c = fgetc(opening);
			if (c == '\n') {
				count ++;
			}
		} while (c != EOF);
		
		fclose(opening);
	}
		
	if((opening = fopen(filename, "r")) == NULL) {
		
		printf("Error opening file.");
		return 0;
	}
	
	else {
		
		for (i = 0;  i < count; i++) {
			
			fscanf(opening, "%s %s %s", &person_list[i].firstname[0], &person_list[i].lastname[0], &person_list[i].phone[0]);

			resultfirst = strcmp(person_list[i].firstname, firstname);
			resultsecond = strcmp(person_list[i].lastname, lastname);

			if (resultfirst == 0 && resultsecond == 0) {

				person_list[i].firstname[0] = '\0';
				person_list[i].lastname[0] = '\0';
				person_list[i].phone[0] = '\0';

				/*printf("Match found!");*/
			}
		}
		fclose(opening);
	}


if((opening = fopen(filename, "w")) == NULL) {
		
		printf("Error opening file.");
		return 0;
	}
	
else {

	for (i = 0; i < count; ++i)
	{
		fprintf(opening, "%s %s\t%s\n", person_list[i].firstname, person_list[i].lastname, person_list[i].phone);

	}

}
	

fclose(opening);
	
return 0;

}



