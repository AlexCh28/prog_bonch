#include<stdio.h>

float y(float x)
{
    return -2.4*x*x + 5*x - 3;
}

int main()
{
    printf("------------------\n");
    printf("! x !   y=f(x)   !\n");
    printf("------------------\n");
    for (int x = 7; x < 12; x++)
    {
        printf("%3d\t%5.2f\n", x, y(x));
    }
}