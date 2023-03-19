#include <stdio.h>


void tvanshanneri_bazmapatkum(int number);

int main()
{
	int number = 0;
	scanf("%i", &number);
	tvanshanneri_bazmapatkum(number);


}

void tvanshanneri_bazmapatkum(int number)
{
        int count = 0;
        int sum = 1;
        while(number != 0)
        {
                count = number % 10;
                sum *= count;
                number /= 10;

        }
        printf("%i", sum);

}
