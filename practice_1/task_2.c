#include<stdio.h>

int f(int x)
{
    if (x > 0)
    {
        return 2*x-10;
    }
    else if (x == 0)
    {
        return 0;
    }
    else{
        return 2*(-1*x) - 1;
    }
}

int main()
{
    int x;

    printf("Введите x: ");
    scanf("%d", &x);

    printf("f(x) = %d\n", f(x));

    return 0;
}