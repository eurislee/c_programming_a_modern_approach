#include <stdio.h>

int main()
{

    int number;
    int first_digit, second_digit;

    printf("Enter two-digit number: ");
    scanf("%d", &number);

    first_digit = number / 10;
    second_digit = number % 10;

    printf("First digit = %d\n", second_digit);
    printf("Second digit = %d\n", first_digit);

    printf("The reversal is: %d%d\n", second_digit, first_digit);

    return 0;
}
