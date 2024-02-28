#include<stdio.h>

void whileCicleOutput();
void doWhileCicleOutput();
void forCicleOutput();
void forGotoCicleOutput();
void recursionCicleOutput();

int main()
{
    printf("while: ");
    whileCicleOutput();

    printf("for: ");
    forCicleOutput();

    printf("do while: ");
    doWhileCicleOutput();

    printf("goto: ");
    forGotoCicleOutput();

    printf("recursion: ");
    recursionCicleOutput(5);

    return 0;
}

void whileCicleOutput()
{
    int i = 5;
    while (i > 0)
    {
        printf("%d ", i--);
    }
    printf("\n");
}

void doWhileCicleOutput()
{
    int j = 5;
    do {
        printf("%d ", j--);
    }
    while (j > 0);
    printf("\n");
}

void forCicleOutput()
{
    for(int i = 5; i > 0; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void forGotoCicleOutput()
{
    int i = 5;
    for(; ;)
    {
        printf("%d ", i--);
        if (i <= 0)
        {
            goto end_cicle;
        }
    }
    end_cicle: printf("\n");
}

void recursionCicleOutput(int i)
{
    if (i > 0)
    {
        printf("%d ", i--);
        recursionCicleOutput(i);
    }
    else
    {
        printf("\n");
    }
}