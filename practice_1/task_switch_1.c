#include<stdio.h>

int main()
{
    int dayNumber;

    printf("Введите порядковый номер дня недели и нажмите <Enter>-> ");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 1:
        printf("Понедельник\n");
        break;

    case 2:
        printf("Вторник\n");
        break;

    case 3:
        printf("Среда\n");
        break;

    case 4:
        printf("Четверг\n");
        break;

    case 5:
        printf("Пятница\n");
        break;

    case 6:
        printf("Суббота\n");
        break;

    case 7:
        printf("Воскресенье\n");
        break;
    
    default:
        printf("Такого дня недели нет\n");
        break;
    }

    return 0;
}