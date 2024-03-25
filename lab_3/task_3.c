#include<math.h>
#include<stdio.h>

double y(double x)
{
    return x*x*x + cos(x);
}

int main()
{
    double start, end, step;

    printf("Введите нижнюю границу: ");
    scanf("%lf", &start);

    printf("Введите верхнюю границу: ");
    scanf("%lf", &end);

    if (start >= end)
    {
        printf("Начальная граница не может быть больше конечной\n");
        return 0;
    }

    printf("Введите шаг: ");
    scanf("%lf", &step);

    if (step <= 0)
    {
        printf("Шаг должен быть строго положительный\n");
        return 0;
    }

    printf("----------------------------------\n");
    printf("!    x    !        y=f(x)        !\n");
    printf("----------------------------------\n");

    double x = start;

    while (x <= end)
    {
        printf("%10.1f \t %10.2f\n", x, y(x));
        x += step;
    }
}