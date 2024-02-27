#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
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

    printf("Maximum: %d", m);
    return 0;
}