#include<stdio.h>

const int CORRECT_ANSWER = 1703; 

int main()
{
    printf("В каком году был основан Санкт-Петербург?\n");
    
    int userAnswer;

    printf("Введите число и нажмите <Enter>-> ");
    scanf("%d", &userAnswer);

    (userAnswer != CORRECT_ANSWER) ? 
        printf("Вы ошиблись, Санкт-Петербург был основан в %d году\n", CORRECT_ANSWER) : printf("Вы ответили верно\n");

    return 0;
}