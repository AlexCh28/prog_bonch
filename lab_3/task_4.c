#include<stdio.h>


const double K = 10;
const double STEP = 0.2;
const double START = -2;
const double END = 2;

double y(double x)
{
    return K*(x*x-1)/(x*x+1);
}

int main()
{
    double x;

    printf("----------------------------------\n");
    printf("!    x    !        y=f(x)        !\n");
    printf("----------------------------------\n");
    x = START;
    while (x <= END)
    {
        printf("%7.1f \t %7.2f\n", x, y(x));
        x += STEP;
    }
}