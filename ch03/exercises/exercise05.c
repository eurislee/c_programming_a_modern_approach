#include <stdio.h>

int main()
{
    int element11, element12, element13, element14;
    int element21, element22, element23, element24;
    int element31, element32, element33, element34;
    int element41, element42, element43, element44;

    int row1, row2, row3, row4;
    int col1, col2, col3, col4;
    int diag1, diag2;

    printf("Enter the number from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
                            &element11, &element12, &element13, &element14,
                            &element21, &element22, &element23, &element24,
                            &element31, &element32, &element33, &element34,
                            &element41, &element42, &element43, &element44);

    row1 = element11 + element12 + element13 + element14;
    row2 = element21 + element22 + element23 + element24;
    row3 = element31 + element32 + element33 + element34;
    row4 = element41 + element42 + element43 + element44;

    col1 = element11 + element21 + element31 + element41;
    col2 = element12 + element22 + element32 + element42;
    col3 = element13 + element23 + element33 + element43;
    col4 = element14 + element24 + element34 + element44;

    diag1 = element11 + element22 + element33 + element44;
    diag2 = element14 + element23 + element32 + element41;

    printf("Row sums: %d, %d, %d, %d \n", row1, row2, row3, row4);
    printf("Column sums: %d, %d, %d, %d \n", col1, col2, col3, col4);
    printf("Diagonal sums: %d, %d \n", diag1, diag2);

    return 0;
}
