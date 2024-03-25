#include<stdio.h>

double y(double x)
{
    double value = 1;
    double step = 0.5;
    double a = 0;
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

    double x = 0;
    double step = 0.1;
    while (x <= 0.9)
    {
        printf("%4.1f \t %5.2f\n", x, y(x));
        x += step;
    }
}