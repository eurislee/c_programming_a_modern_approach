#include <stdio.h>

int main(int argc, char *argv[])
{
    float amount, tax, total_amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    tax = amount * 0.05;
    total_amount = amount + tax;

    printf("With tax added: $%.2f\n", total_amount);

    return 0;
}