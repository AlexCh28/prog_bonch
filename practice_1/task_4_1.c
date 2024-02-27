#include <stdbool.h> // header file to use bool variables
#include <string.h> // header file to use string functions

#include<stdio.h>

int main()
{
    int N, K;

    printf("Введите N: ");
    scanf("%d", &N);

    printf("Enter K: ");
    scanf("%d", &K);

    (N%K==0) ? printf("N is divisible by K") : printf("N is NOT divisible by K");

    return 0;
}