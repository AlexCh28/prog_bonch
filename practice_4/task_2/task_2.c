#include<stdio.h>

const int INPUT_LENGTH = 100;
const char OUTPUT_FILE_NAME[] = "output";

int main()
{
    char consoleInput[INPUT_LENGTH];

    FILE *outputPtr;

    outputPtr = fopen(OUTPUT_FILE_NAME, "w");
    if (outputPtr == NULL)
    {
        printf("Файл %s не был найден\n", OUTPUT_FILE_NAME);
        return 0;
    }

    printf("Ввод: ");
    scanf("%s", consoleInput);

    fclose(outputPtr);

    return 0;
}