#include<stdio.h>

const float BOTTOM_BORDER = -5.1;
const float TOP_BORDER = 3.6;

int main()
{
    float user_number;
    printf("Введите число: ");
    scanf("%f", &user_number);

    if ( BOTTOM_BORDER < user_number && user_number < TOP_BORDER )
    {
        printf("Ваше число принадлежит интервалу(%.1f, %.1f)\n", BOTTOM_BORDER, TOP_BORDER);
    }
    else
    {
        printf("Ваше число не принадлежит интервалу(%.1f, %.1f)\n", BOTTOM_BORDER, TOP_BORDER);
    }

    return 0;
}