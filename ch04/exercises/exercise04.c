#include <stdio.h>

int main()
{

    int number;
    int first_digit, second_digit, third_digit, fourth_digit, fifth_digit;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    
    fifth_digit = number % 8;
    number /= 8;
    fourth_digit = number % 8;
    number /= 8;
    third_digit = number % 8;
    number /= 8;
    second_digit = number % 8;
    number /= 8;
    first_digit = number % 8;
    
    printf("In octal, your number is: %1d%1d%1d%1d%1d\n", 
             first_digit, second_digit, third_digit, fourth_digit, fifth_digit);
    
    return 0;
}
