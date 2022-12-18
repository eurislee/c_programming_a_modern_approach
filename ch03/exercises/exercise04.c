#include <stdio.h>

int main()
{
    int country_code, area_code, phone_number;

    printf("Enter phone number [(xxx) xxx-xxx]: ");
    scanf("(%d) %d-%d", 
            &country_code, &area_code, &phone_number);

    printf("You entered %d.%d.%d\n", 
            country_code, area_code, phone_number);

    return 0;
}
