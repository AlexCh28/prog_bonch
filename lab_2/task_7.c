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

    float m1,m2,m3;

    if (a > b)
    {
        if (a > c)
        {
            m1 = a;
            m2 = c;
            m3 = b;
        }
        else
        {
            m1 = c;
            m2 = a;
            m3 = b;
        }
    }
    else
    {
        if (b > c)
        {
            m1 = b;
            m2 = a;
            m3 = b;
        }
        else
        {
            m1 = c;
            m2 = a;
            m3 = b;
        }
    }
    
    if ( m1*m1 < m2*m2 + m3*m3 )
    {
        printf("Это остроугольный треугольник\n");
    }
    else if (m1*m1 == m2*m2 + m3*m3)
    {
        printf("Это прямоугольный треугольник\n");
    }
    else
    {
        printf("Это тупоугольный треугольник\n");
    }
    

    return 0;
}