#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Введите первое число: ");
    scanf("%f", &a);

    printf("Введите второе число: ");
    scanf("%f", &b);

    printf("Введите третье число: ");
    scanf("%f", &c);

    if ( a<b && b<c )
    {
        printf("Неравенство выполняется\n");
    }
    else
    {
        printf("Неравенство не выполняется\n");
    }

    return 0;
}