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

    if ( a==b && b==c && a==c )
    {
        printf("Это равносторонний треугольник\n");
        return 0;
    }

    if (a==b || b==c || a==c)
    {
        printf("Треугольник равнобедренный\n");
    }
    else
    {
        printf("Треугольник разносторонний\n");
    }

    return 0;
}