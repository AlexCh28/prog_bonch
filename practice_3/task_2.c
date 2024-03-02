#include<stdio.h>

int getGreatestCommonDivisor(int, int);

int main()
{
    int x, y;

    printf("Введите первое число: ");
    scanf("%d", &x);

    printf("Введите второе число: ");
    scanf("%d", &y);

    printf("Наибольший общий делитель: %d\n", getGreatestCommonDivisor(x, y));

    return 0;
}

int getGreatestCommonDivisor(int x, int y)
{
    while(x != y)
    {
        if (x > y)
        {
            x -= y;
        }
        else
        {
            y -= x;
        }
    }
    return x;
}