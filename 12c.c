#include <stdio.h>

void parz_bard_tver(int number);

int main()
{
	int num = 0;
	puts("Enter number");
	scanf("%i", &num);
	parz_bard_tver(num);




}


void parz_bard_tver(int number)
{
	if(number = 1)
        {
                printf("voch parz e voch baxadryl");
        }
	
	int count = 0;
		
	for(int i = 1; i < number; i++)
	{

		if(number % i == 0)
		{
			count++;
		}
	}
    if(count < 2)
	{

		printf("parz e");
	}
	else
	{
		printf("bard e");
	}

	


}
