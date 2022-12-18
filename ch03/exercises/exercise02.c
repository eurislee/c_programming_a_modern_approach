#include <stdio.h>

int main()
{
    int item_number;
    float unit_price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unite price: ");
    scanf("%f", &unit_price);

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%d/%d\n",
            item_number,
            unit_price,
            month, day, year);


    return 0;
}
