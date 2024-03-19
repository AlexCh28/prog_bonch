#include<stdio.h>

const int INPUT_LENGTH = 100;
const char OUTPUT_FILE_NAME[] = "output";

int main()
{
    int mode;
    char userFileName[INPUT_LENGTH];

    FILE *inputPtr, *outputPtr;

    inputPtr = fopen(INPUT_FILE_NAME, "r");
    if (inputPtr == NULL)
    {
        printf("Файл %s не был найден\n", INPUT_FILE_NAME);
        return 0;
    }

    printf("Куда стоит скопировать содержимое файла [1 - копировать в файл, 2 - вывести в консоль]: ");
    scanf("%d", &mode);

    if (mode == 1)
    {
        printf("Введите название для нового файла: ");
        scanf("%s", userFileName);

        outputPtr = fopen(userFileName, "w");
        if (outputPtr == NULL)
        {
            printf("Файл %s не был найден\n", userFileName);
            fclose(inputPtr);
            return 0;
        }

        while(!feof(inputPtr))
        {
            char c = fgetc(inputPtr);
            if (c == -1)
            {
                break;
            }
            fprintf(outputPtr, "%c", c);
        }

        printf("Содержимое файла %s скопировано в файл %s\n", INPUT_FILE_NAME, userFileName);

        fclose(inputPtr);
        fclose(outputPtr);

        return 0;
    }
    else if (mode == 2)
    {
        while(!feof(inputPtr))
        {
            char c = fgetc(inputPtr);
            if (c == -1)
            {
                break;
            }
            printf("%c", c);
        }
        printf("\n");
        printf("Содержимое файла %s скопировано в консоль\n", INPUT_FILE_NAME);

        fclose(inputPtr);

        return 0;
    }
    else
    {
        printf("Вы выбрали несуществующую опцию.\n");
        return 0;
    }
}