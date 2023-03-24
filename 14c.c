#include <stdio.h>
#include <stdlib.h>

int* function(int size);

int main()
{
	int number = 0;
	puts("Enter number");
	scanf("%i", &number);
	int* copy = function(number);
	for(int i = 0; i < number; i++)
	{
		printf("%i", copy[i]);

	}
	free(copy);
}

int* function(int size)
{
	int* array = (int*)calloc(size, sizeof(int));
	puts("Enter array number");
	for(int i = 0; i < size; i++)
	{
		scanf("%i", &array[i]);
		
	}

	return array;
}



