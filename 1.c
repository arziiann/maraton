#include <stdio.h>
#include <stdlib.h>

char* strchr1(char* arr, char element);

int main()
{

    int size = 0;
    puts("Enter array size");
    scanf("%i", &size);
       
	
    
    char* ptr = (char*)malloc(size);
    printf("Enter array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf(" %c", &ptr[i]);
    }
    printf("Enter Element: \n");
    char element;
    scanf(" %c", &element);
    printf("%s", strchr1(ptr, element));
  
    return 0;
}


char* strchr1(char* arr, char element)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (element == arr[i])
        {
            return arr + i;            
        }
    }

    return NULL;
    
}
