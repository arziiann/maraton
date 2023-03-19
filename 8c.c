#include <stdio.h>
#include <stdlib.h>

int array_min(int* array, int size);

int main()
{
	int size = 0;
	puts("array size");
	scanf("%i", &size);
		
	puts("Enter array elements");
	int* array = (int*)calloc(size, sizeof(int));
	for(int i = 0; i < size; i++)
	{
		scanf("%i", &array[i]);
	}
	printf("%i", array_min(array, size));
}

int array_min(int* array, int size)
{
        int min_1 = array[0];
        for(int i = 0; i < size; i++)
        {
                if(array[i] < min_1)
                {
                        min_1 = array[i];
                }

        }
        return min_1;



}

