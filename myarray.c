#include <stdio.h>

void pretty(int number[5][5], int i, int j);

int main()
{
	int matrix[5][5] = { 4, 6, 25, 88, 5,
						34, 5, 300, 4, 65,
						78, 43, 11, 90, 125,
						98, 585, 12, 63, 21,
						45, 35, 9, 5, 1 };
	
	int x = 0, y = 0, sum = 0;
	
	
	printf("In the array:\n");
		
	for(x = 0; x < 5; x++)
	{
		for(y = 0; y < 5; y++)
		{
			sum = sum + matrix[x][y];
				
		}
		
	}
	
	pretty(matrix, x, y);
	printf("the sum of the elements is %d", sum);
	
	return 0;
	
	}

void pretty(int number[5][5], int i, int j)

{
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(j == 4) {
				printf("%d\n", number[i][j]);
			}
			else {
				printf("%d\t", number[i][j]);
			}
		}
	}	
			
}