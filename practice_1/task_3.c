#include<stdio.h>

int main()
{
    int N, K;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter K: ");
    scanf("%d", &K);

    (N%K==0) ? printf("N is divisible by K") : printf("N is NOT divisible by K");

    return 0;
}