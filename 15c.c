#include <stdio.h>
#include <stdlib.h>

void char_array(char* array, int size);

int main()
{

	int size = 0;
	puts("Enter array size");
	scanf("%i", &size);

	char* array = (char*)calloc(size, sizeof(char));
	
	puts("Enter array char elements");
	for(int i = 0; i < size; i++)
	{
		scanf(" %c", &array[i]);

	}
	char_array(array, size);
	free(array);
}



void char_array(char* array, int size)
{
	for(int i = 0; i < size; i++)
	{
		if(array[i] >= 'a' && array[i] <= 'z')
		{
			printf("%c", array[i] - 32);

		}
		
		else
		{
			printf("%c", array[i]);

		}

	

	}

}
