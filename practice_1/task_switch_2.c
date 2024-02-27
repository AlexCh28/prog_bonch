#include<stdio.h>

int main()
{
    int cardNumber;

    printf("Введите номер карты и нажмите <Enter>-> ");
    scanf("%d", &cardNumber);

    switch (cardNumber)
    {
    case 14:
        printf("Туз\n");
        break;

    case 13:
        printf("Король\n");
        break;

    case 12:
        printf("Дама\n");
        break;

    case 11:
        printf("Валет\n");
        break;

    case 10:
        printf("Десятка\n");
        break;

    case 9:
        printf("Девятка\n");
        break;

    case 8:
        printf("Восьмёрка\n");
        break;

    case 7:
        printf("Семёрка\n");
        break;

    case 6:
        printf("Шестёрка\n");
        break;
    
    default:
        printf("Такой карты нет\n");
        break;
    }

    return 0;
}