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
    recursionCicleOutput(1);

    return 0;
}

void whileCicleOutput()
{
    int i = 0;
    while (i < 5)
    {
        printf("%d ", ++i);
    }
    printf("\n");
}

void doWhileCicleOutput()
{
    int j = 1;
    do {
        printf("%d ", j++);
    }
    while (j <= 5);
    printf("\n");
}

void forCicleOutput()
{
    for(int i = 1; i <=5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void forGotoCicleOutput()
{
    int i = 1;
    for(; ;)
    {
        printf("%d ", i++);
        if (i > 5)
        {
            goto end_cicle;
        }
    }
    end_cicle: printf("\n");
}

void recursionCicleOutput(int i)
{
    if (i <= 5)
    {
        printf("%d ", i++);
        recursionCicleOutput(i);
    }
    else
    {
        printf("\n");
    }
}