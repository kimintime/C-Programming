#include <stdio.h> 
void pretty(int number[10][10], int x, int y);

int main()
{
	FILE *math_one;
	FILE *math_two;
	FILE *sum_file;
	
	int matrix_one[10][10];
	int	matrix_two[10][10];
	int sum_matrix[10][10];
	
	int i = 0, j = 0;

	if(((math_one = fopen("mata.txt", "r")) == NULL) || ((math_two = fopen("matb.txt", "r"))) == NULL){
		printf("An error occurred when opening either file!"); 
        
		return 0;
        }

	else {
		for(i = 0; i < 10; i++) {
			for(j = 0; j < 10; j++) {
				
				fscanf(math_one, "%d", &matrix_one[i][j]);
				fscanf(math_two, "%d", &matrix_two[i][j]);
				}
			}
		}
	
	fclose(math_one);
	fclose(math_two);

	printf("The numbers in the first file are:\n");
	pretty(matrix_one, i, j);

	printf("\nThe numbers in the second file are:\n");
	pretty(matrix_two, i, j);

	
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
				
			sum_matrix[i][j] = matrix_one[i][j] + matrix_two[i][j];
				
			}
		}
	
	if((sum_file = fopen("sum.usr", "w")) == NULL) {
		printf("An error occurred when opening the file!");
	}
	
	else {
		
		for(i = 0; i < 10; i++) {
			
			for(j = 0; j < 10; j++) { 
				
				if (j == 9) {
					
					fprintf(sum_file, "%d\n", sum_matrix[i][j]);
					
				}
				
				else {
					
					fprintf(sum_file, "%d\t", sum_matrix[i][j]);
					
				}
			}
		}
		
		fclose(sum_file);
		
		printf("The sum of the matrices has been calculated into the file sum.usr.\n");
		
		printf("\nThe sum of all the numbers added to each other are:\n" );
		pretty(sum_matrix, i, j);

	}
   
return 0;
	
}

void pretty(int number[10][10], int x , int y)

{

	for(x = 0; x < 10; x++)
	{
		for(y = 0; y < 10; y++)
		{
			if(y == 9) {
				printf("%d\n", number[x][y]);
			}
			else {
				printf("%d\t", number[x][y]);
			}
		}
	}	
			
}