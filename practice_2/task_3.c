#include<stdio.h>

const int MULTIPLIER = 3; // можно сменить таблицу умножения

const int TABLE_START = 1; // начало таблицы
const int TABLE_LIMIT = 10; // конец таблицы

void whileCicleOutput();
void doWhileCicleOutput();
void forCicleOutput();
void forGotoCicleOutput();
void recursionCicleOutput(int);

int main()
{
    printf("while: \n");
    whileCicleOutput();

    printf("for: \n");
    forCicleOutput();

    printf("do while: \n");
    doWhileCicleOutput();

    printf("goto: \n");
    forGotoCicleOutput();

    printf("recursion: \n");
    recursionCicleOutput(TABLE_START);

    return 0;
}

void whileCicleOutput()
{
    int i = TABLE_START;
    while (i <= TABLE_LIMIT)
    {
        printf("%d * %d = %d\n", i, MULTIPLIER, i*MULTIPLIER);
        i++;
    }
    printf("\n");
}

void doWhileCicleOutput()
{
    int i = TABLE_START;
    do {
        printf("%d * %d = %d\n", i, MULTIPLIER, i*MULTIPLIER);
        i++;
    }
    while (i <= TABLE_LIMIT);
    printf("\n");
}

void forCicleOutput()
{
    for(int i = TABLE_START; i <= TABLE_LIMIT; i++)
    {
        printf("%d * %d = %d\n", i, MULTIPLIER, i*MULTIPLIER);
    }
    printf("\n");
}

void forGotoCicleOutput()
{
    int i = TABLE_START;
    for(; ;)
    {
        printf("%d * %d = %d\n", i, MULTIPLIER, i*MULTIPLIER);
        i++;
        if (i > TABLE_LIMIT)
        {
            goto end_cicle;
        }
    }
    end_cicle: printf("\n");
}

void recursionCicleOutput(int i)
{
    if (i <= TABLE_LIMIT)
    {
        printf("%d * %d = %d\n", i, MULTIPLIER, i*MULTIPLIER);
        recursionCicleOutput(i+1);
    }
    else
    {
        printf("\n");
    }
}