#include <stdio.h>

int main(int argc, char *argv[])
{
    double amount, interest_rate, monthly_interest_rate, monthly_payment;
    double first_payment, second_payment, third_payment;
    printf("Enter amount of loan: ");
    scanf("%lf", &amount);
    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);

    monthly_interest_rate = (interest_rate / 100) / 12;
    first_payment = (amount - monthly_payment) + (amount * monthly_interest_rate);
    second_payment = (first_payment - monthly_payment) + (first_payment * monthly_interest_rate);
    third_payment = (second_payment - monthly_payment) + (second_payment * monthly_interest_rate);
    printf("Balance remaining after first payment: $%.2lf\n", first_payment);
    printf("Balance remaining after second payment: $%.2lf\n", second_payment);
    printf("Balance remaining after third payment: $%.2lf\n", third_payment);

    return 0;
}