#include <stdio.h>

int main()
{

    int number;
    int first_digit, second_digit, third_digit;

    printf("Enter three-digit number: ");
    scanf("%d", &number);

    first_digit = number / 100;
    second_digit = (number / 10) % 10;
    third_digit = number % 10;

    printf("First digit = %d\n", first_digit);
    printf("Second digit = %d\n", second_digit);
    printf("Third digit = %d\n", third_digit);

    printf("Revers order is: %d%d%d\n", third_digit, second_digit, first_digit);

    return 0;
}
