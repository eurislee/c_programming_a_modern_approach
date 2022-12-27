#include <stdio.h>

int main()
{

    int first_digit, second_digit, third_digit;

    printf("Enter three digits: ");
    scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);

    printf("Revers order: %1d%1d%1d\n", third_digit, second_digit, first_digit);

    return 0;
}
