#include <stdio.h>
#include <stdlib.h>
void kent_tver(int *arr_1, int *arr_2, int size);

int main()
{	
	
	puts("enter size");
	int size = 0;

	scanf("%i", &size);

	int* ptr = (int*)malloc(size * sizeof(int));
	puts("enter array");

	for(int i = 0; i < size; i++)
	{
		scanf("%i", &ptr[i]);
	}

	int count = 0;
	
	for(int i = 0; i < size; i++)
	{
		if(ptr[i] % 2 != 0)
		{
			count++;
		}
	}

	int* ptr_1 = (int*)malloc(count);
	kent_tver(ptr, ptr_1, size);

	for(int i = 0; i < count; i++)
	{
		printf("kent en --> %i \n", ptr_1[i]);
	}
}

void kent_tver(int *arr_1, int *arr_2, int size)
{
        int count = 0;
        for(int i = 0; i <= size; i++)
        {
                if(arr_1[i] % 2 != 0)
                {

                        arr_2[count] = arr_1[i];
                        count++;

                }
        }

}

