#include <stdio.h>

int main(int argc, char *argv[])
{
    int amount, twenty_dollars, ten_dollars, five_dollars, one_dollars;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    twenty_dollars = amount / 20;
    printf("$20 bills: %d\n", twenty_dollars);
    ten_dollars = (amount - twenty_dollars * 20) / 10;
    printf("$10 bills: %d\n", ten_dollars);
    five_dollars = (amount - twenty_dollars * 20 - ten_dollars * 10) / 5;
    printf("$5 bills: %d\n", five_dollars);
    one_dollars = (amount - twenty_dollars * 20 - ten_dollars * 10 - five_dollars * 5);
    printf("$1 bills: %d\n", one_dollars);

    return 0;
}