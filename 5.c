#include <stdio.h>


double lli_cast_to_double(long long int num);
int main()
{	
	
	long long int num;
	scanf("%lld", &num);
	printf("%lf", lli_cast_to_double(num));
	
	
}
	double lli_cast_to_double(long long int num)
	{
		double* ptr = (double*)&num;
		return *ptr;
	}



