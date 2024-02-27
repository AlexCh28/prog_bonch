#include<stdio.h>

int main()
{
    int N, K;

    printf("Введите N: ");
    scanf("%d", &N);

    printf("Введите K: ");
    scanf("%d", &K);

    (N%K==0) ? printf("N кратно K\n") : printf("N не кратно K\n");

    return 0;
}