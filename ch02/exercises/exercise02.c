#include <stdio.h>

#define PI 3.14

int main(int argc, char *argv[])
{
    int radius = 10;
    int pow = radius * radius * radius;
    float v = 4.0f / 3.0f * PI * (pow * 1.0);

    printf("The volume of the ball is %.2f\n", v);

    return 0;
}