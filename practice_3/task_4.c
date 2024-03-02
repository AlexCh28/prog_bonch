#include<stdio.h>

int digitSum(int);

int main()
{
    int x;

    printf("Введите число: ");
    scanf("%d", &x);

    printf("Сумма цифр этого числа: %d\n", digitSum(x));
    
    return 0;
}

int digitSum(int x)
{
    int s = 0;

    while(x>0)
    {
        s += x%10;
        x /= 10;
    }

    return s;
}