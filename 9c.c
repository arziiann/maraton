#include <stdio.h>
#include <stdlib.h>
	
int sum_matrix_auxiliary_diagonal(int** array, const int rows, const int column);

int main()
{  
	 int rows = 0;
 	puts("To describe rows");
 	scanf("%i", &rows);

 	int column = 0;
	puts("To describe column");
	scanf("%i", &column);
  
	int** array = (int**)calloc(rows, sizeof(int*));
	for(int i = 0; i < rows; i++)
	{
		array[i] = (int*)calloc(column, sizeof(int));
 	}  

	
	printf("\n");
 	for(int i = 0; i < rows; i++)
	{
 		for(int j = 0; j < column; j++)
		{
			array[i][j] = 1;
			scanf("%i", &array[i][j]);
		 }
	
	printf("\n");
 	}

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("%i ", array[i][j]);
		}
	printf("\n");
	}
	printf("the sum of the elements below the supporting diagonal. %i", sum_matrix_auxiliary_diagonal(array, rows, column));
	free(array);
}

int sum_matrix_auxiliary_diagonal(int** array, const int rows, const int column)
{
		int sum = 0;
		printf("\n");
		for(int i = 1; i < rows; i++)
		{	
			for(int j = column - i; j < column; j++)
			{
				sum += array[i][j];
			}
	
 		}
		return sum;

}

 

