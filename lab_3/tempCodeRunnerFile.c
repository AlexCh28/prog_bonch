#include<stdio.h>

float y(float x)
{
    float value = 1;
    float step = 0.5;
    float a = 0;
    while (a <= 5)
    {
        value *= x-a;
        a += step;
    }
    return value;
}

int main()
{
    printf("------------------\n");
    printf("! x !   y=f(x)   !\n");
    printf("------------------\n");

    float x = 0;
    float step = 0.1;
    while (x < 1)
    {
        printf(" %1.1f\t%5.2f\n", x, y(x));
        x += step;
    }
}