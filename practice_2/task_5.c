#include<stdio.h>


void whileCicleOutput();
void doWhileCicleOutput();
void forCicleOutput();
void forGotoCicleOutput();
void recursionCicleOutput();

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
    recursionCicleOutput(0, 0);

    return 0;
}

void whileCicleOutput()
{
    int i = 0;
    int j = 0;
    while (i <= 9)
    {
        j = 0;
        while (j <= 9)
        {
            (i == 0) ? printf(" %d ", j) : printf("%d%d ", i, j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}

void doWhileCicleOutput()
{
    int i = 0;
    int j = 0;
    do {
        j = 0;
        do {
            (i == 0) ? printf(" %d ", j) : printf("%d%d ", i, j);
            j++;
        }
        while (j <= 9);
        printf("\n");
        i++;
    } 
    while (i <= 9);
    printf("\n");
}

void forCicleOutput()
{
    for(int i = 0; i <= 9; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            (i == 0) ? printf(" %d ", j) : printf("%d%d ", i, j);
        }
        printf("\n");
    }
    printf("\n");
}

void forGotoCicleOutput()
{
    int i = 0;
    int j = 0;
    for(; ;)
    {
        j = 0;
        for(; ;)
        {
            (i == 0) ? printf(" %d ", j) : printf("%d%d ", i, j);
            j++;
            if (j > 9)
            {
                goto new_row;
            }
        }
        new_row: printf("\n");
        i++;
        if (i > 9)
        {
            goto end;
        }
    }
    end: printf("\n");
}

void recursionCicleOutput(int i, int j)
{
    if (i <= 9)
    {
        if (j <= 9)
        {
            (i == 0) ? printf(" %d ", j) : printf("%d%d ", i, j);
            recursionCicleOutput(i, j+1);
        }
        else
        {
            printf("\n");
            recursionCicleOutput(i+1, 0);
        }
    }
    else
    {
        printf("\n");
    }
}