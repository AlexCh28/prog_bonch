#include<stdio.h>

int main()
{
    int num;

    printf("Введите любое число: ");
    scanf("%d", &num);

    (num%2==0) ? printf("Это число чётное\n") : printf("Это число нечётное\n");

    return 0;
}