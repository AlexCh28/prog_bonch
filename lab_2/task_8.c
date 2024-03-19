#include<stdio.h>

int main()
{
    float r, a, b;

    printf("Введите радиус мячика: ");
    scanf("%f", &r);

    printf("Введите ширину отверстия: ");
    scanf("%f", &a);

    printf("Введите высоту отверстия: ");
    scanf("%f", &b);

    float d = 2*r;

    if (d <= a && d<=b)
    {
        printf("Шарик пройдёт через отверстие\n");
    }
    else
    {
        printf("Шарик не пройдёт через отверстие\n");
    }

    return 0;
}