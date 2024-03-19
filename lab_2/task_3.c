#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Введите рост первого человека: ");
    scanf("%d", &a);

    printf("Введите рост второго человека: ");
    scanf("%d", &b);

    printf("Введите рост третьего человека: ");
    scanf("%d", &c);

    if (a==b && b==c && c==a)
    {
        printf("Их рост одинаковый\n");
    }
    else
    {
        printf("У них разный рост\n");
    }

    return 0;
}