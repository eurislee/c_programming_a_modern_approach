#include <stdio.h>

int main()
{

    int number = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) 
    {
        printf("Number is one-digit\n");
    }
    else if (number >= 10 && number <= 99)
    {
        printf("Number is two-digit\n");
    }
    else if (number >= 100 && number <= 999)
    {
        printf("Number is three-digit\n");
    }
    else
    {
        printf("Number is four-digit\n");
    }

    return 0;
}
