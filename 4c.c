#include <stdio.h>
#include <stdlib.h>


void array_sum(int *array, int size);


int main()
{
	int size = 0;
	
	puts("Enter array size");
	scanf("%i", &size);

	int* array = (int*)calloc(size, sizeof(int));

	puts("Enter array elements");
	for(int i = 0; i < size; i++)
	{
		scanf("%i", &array[i]);	
		
	}
	array_sum(array, size);
	
}

void array_sum(int *array, int size)
{
        int sum = 0;
        for(int i = 0; i < size; i++)
        {
                sum += array[i];

        }
        printf("sum in array elements --> %i", sum);



}


