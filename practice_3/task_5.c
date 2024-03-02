#include<stdio.h>
#include<string.h>

float letterPercentage(char*, char);

int main()
{
    char string[80];
    char x;

    printf("Введите строку: ");
    fgets(string, sizeof(string), stdin);

    printf("Введите символ: ");
    scanf("%c", &x);

    printf("Доля этого символа в строке: %3.2f %%\n", letterPercentage(string, x));
    
    return 0;
}

float letterPercentage(char string[], char letter)
{
    float length = strlen(string) - 1;
    float s = 0;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == letter)
        {
            s += 1;
        }
    }

    return s/length*100 ;
}