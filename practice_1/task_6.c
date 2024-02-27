#include<stdio.h>

int main()
{
    int userHeight, userWeight;
    int optimalWeight;

    printf("Введите свой рост и нажмите <Enter>-> ");
    scanf("%d", &userHeight);

    printf("Введите свой вес и нажмите <Enter>-> ");
    scanf("%d", &userWeight);

    optimalWeight = userHeight - 100;

    if (userWeight > optimalWeight) 
    {
        printf("Вам необходимо похудеть\n");
    }
    else if (userWeight == optimalWeight)
    {
        printf("У вас оптимальный вес\n");
    }
    else
    {
        printf("Вам необходимо поправиться\n");
    }

    return 0;
}