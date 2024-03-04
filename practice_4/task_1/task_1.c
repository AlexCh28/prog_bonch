#include<stdio.h>

const int INPUT_LENGTH = 100;
const char INPUT_FILE_NAME[] = "input";
const char OUTPUT_FILE_NAME[] = "output";

int main()
{
    char inputString[INPUT_LENGTH];
    FILE *inputPtr, *outputPtr;

    inputPtr = fopen(INPUT_FILE_NAME, "r");
    outputPtr = fopen(OUTPUT_FILE_NAME, "w");

    if (inputPtr == NULL)
    {
        printf("Файл %s не был найден\n", INPUT_FILE_NAME);
        return 0;
    }

    fgets(inputString, INPUT_LENGTH, inputPtr);
    printf("%s\n", inputString);

    fprintf(outputPtr, "test write to file from program");

    fclose(inputPtr);
    fclose(outputPtr);

    return 0;
}