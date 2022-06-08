#include <stdio.h>

int main(int argc, char *argv[])
{

    double x, polynomial_value;
    printf("Please enter the value of x: ");
    scanf("%lf", &x);
    polynomial_value = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;

    printf("The value of the polynomial is %.2lf\n", polynomial_value);

    return 0;
}
