#include<stdio.h>

int whileCicleOutput();
int doWhileCicleOutput();
int forCicleOutput();
int forGotoCicleOutput();
int recursionCicleOutput();

int main()
{
    int x;

    printf("Введите число: ");
    scanf("%d", &x);
    printf("\n");

    printf("while: \n");
    printf("сумма %d\n", whileCicleOutput(x));
    printf("\n");

    printf("for: \n");
    printf("сумма %d\n", forCicleOutput(x));
    printf("\n");

    printf("do while: \n");
    printf("сумма %d\n", doWhileCicleOutput(x));
    printf("\n");

    printf("goto: \n");
    printf("сумма %d\n", forGotoCicleOutput(x));
    printf("\n");

    printf("recursion: \n");
    printf("сумма %d\n", recursionCicleOutput(x));

    return 0;
}

int whileCicleOutput(int x)
{
    int i = 1;
    int s = 0;
    while (i <= x)
    {
        s += i;
        i++;
    }
    
    return s;
}

int doWhileCicleOutput(int x)
{
    int i = 1;
    int s = 0;
    do {
        s += i;
        i++;
    }
    while (i <= x);
    
    return s;
}

int forCicleOutput(int x)
{
    int s = 0;
    for(int i = 1; i <= x; i++)
    {
        s += i;
    }

    return s;
}

int forGotoCicleOutput(int x)
{
    int i = 1;
    int s = 0;
    for(; ;)
    {
        s += i;
        i++;
        if (i > x)
        {
            goto end_cicle;
        }
    }
    end_cicle: return s;
}

int recursionCicleOutput(int x)
{
    if (x >= 1)
    {
        return x + recursionCicleOutput(x-1);
    }
    
    return 0;
}