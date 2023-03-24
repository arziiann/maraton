#include <stdio.h>
#include <stdlib.h>


void arrays(int* array_1, int* array_2, int* array_3, int size);
int main()
{
	int size = 0;
	puts("Enter size");
	scanf("%i", &size);
	int* array_1 = (int*)malloc(size);
	puts("Enter array_1 size");

	for(int i = 0; i < size; i++)
	{
		scanf("%i", &array_1[i]);
	}
	
	int* array_2 = (int*)malloc(size * sizeof(int));
	puts("Enter array_2 size");
	
	for(int i = 0; i < size; i++)
	{
		scanf("%i", &array_2[i]);

	}
	
	int* array_3 = (int*)malloc((size * sizeof(int)) * 2);
	
 
	arrays(array_1, array_2, array_3, size);
	free(array_1);
	free(array_2);
	free(array_3);
}


void arrays(int* array_1, int* array_2, int* array_3, int size)
{

        int count = 0;
        for(int i = 0; i < size; i++)
        {
                array_3[i] = array_1[i];
                count++;
        }

        for(int i = 0; i < size; i++)
        {
                array_3[count] = array_2[i];
                count++;

        }

        for(int i = 0; i < size * 2; i++)
        {
                printf("%i \t", array_3[i]);

        }


}
