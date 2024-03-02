#include<stdio.h>

int isPrime(int);

int main()
{
    int x;

    printf("Введите число: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("Единица не является ни простым, ни составным\n");
    }
    else
    {
        (isPrime(x)) ? printf("Число является простым\n") : printf("Число является составным\n");
    }
    
    return 0;
}

int isPrime(int x)
{
    int d = 2;
    while(d < x)
    {
        if (x%d==0)
        {
            return 0;
        }
        d++;
    }
    return 1;
}