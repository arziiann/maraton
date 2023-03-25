#include <stdio.h>

 int power (int num, int exp);

int main()
{
	int number = 0;
	puts("Enter number");
	scanf("%i", &number);
	
	int exp = 0;
	puts("Enter exp");
	scanf("%i", &exp);

   printf("%i", power(number, exp));
	
}

int power(int num, int exp)
{		
	int copy = num;	
	while(exp != 1)
	{
		num = num * copy;
		exp--;

	}
	return num;

}


