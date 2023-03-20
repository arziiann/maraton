#include <stdio.h>

double sqrt(double num) {
    double num_1 = num / 2.0; 
    double num_2;

    while (1) {
        num_2 = (num_1 + num / num_1) / 2.0; 
        if (num_2 == num_1) {
            break; 
        }
        num_1 = num_2;
    }

    return num_2;
}

int main() {
    double num = 0;
	puts("Enter number");
    scanf("%le", &num);
    double result = sqrt(num);
    printf("num -->  %lf \nresult -- >  %lf", num, result);
    return 0;
}


