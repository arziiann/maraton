#include <stdio.h>
#include <stdlib.h>

void zangvac_hakarak_hertakanutyamb(int* array, int size);



int main()
{
	int size = 0;
	puts("Enter array size");
	scanf("%i", &size);

	int* array = (int*)calloc(size, sizeof(int));
	puts("Enter array elements");
	for(int i = 0; i < size; i++)
	{
		scanf( "%i", &array[i]);

	}
	zangvac_hakarak_hertakanutyamb(array, size);
	free(array);

}

void zangvac_hakarak_hertakanutyamb(int* array, int size)
{
	for(int i = size - 1; i >= 0; i--)

	{
		printf("%i", array[i]);

	}

}
