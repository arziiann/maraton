#include <stdio.h>
#include <stdlib.h>


void array(int num1, int num2, int* arr);

int main()
{
	int num1 = 0;
	int num2 = 0;
	
	puts("Enter one number");	
	scanf("%i", &num1);
	
	puts("Enter two number");
	scanf("%i", &num2);
	int* arr = (int*)calloc(num2 - num1, sizeof(int));	
	array(num1, num2, arr);
	free(arr);

}

void array(int num1, int num2, int* arr)
{
        for(int i = num1 + 1; i < num2; i++)
        {
                arr[i] = i;
                printf("%i\n", arr[i]);
        }
        printf("%p", arr);

}

