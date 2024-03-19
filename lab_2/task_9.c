#include<math.h>
#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Введите первую сторону: ");
    scanf("%f", &a);

    printf("Введите вторую сторону: ");
    scanf("%f", &b);

    printf("Введите третью сторону: ");
    scanf("%f", &c);

    if ( !( a+b>c && b+c>a && a+c>b ) )
    {
        printf("Это не треугольник\n");
        return 0;
    }

    float p = (a+b+c)/2;

    printf("Площадь такого треугольника равна %0.2f\n", sqrt(p*(p-a)*(p-b)*(p-c)));

    return 0;
}