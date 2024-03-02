#include<stdio.h>

int isFullSquare(int);

int main()
{
    int x;

    printf("Введите число: ");
    scanf("%d", &x);
        
    (isFullSquare(x)) ? printf("Число является полным квадратом\n") : printf("Число не является полным квадратом\n");
    
    return 0;
}

int isFullSquare(int x)
{
    int d = 1;
    while(d < x/2)
    {
        if (d*d==x)
        {
            return 1;
        }
        d++;
    }
    return 0;
}