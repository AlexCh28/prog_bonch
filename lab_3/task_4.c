#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Введите первое число: ");
    scanf("%d", &a);

    printf("Введите второе число: ");
    scanf("%d", &b);

    printf("Введите третье число: ");
    scanf("%d", &c);

    int m = a;

    if (m < b)
    {
        m = b;
    }
    if (m < c)
    {
        m = c;
    }

    printf("Наибольшее число: %d\n", m);
    return 0;
}