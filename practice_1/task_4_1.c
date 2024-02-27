#include<stdio.h>

int main()
{
    printf("Вычисление стоимости покупки с учетом скидки\n");
    
    int price, discount;

    printf("Введите сумму покупки и нажмите <Enter>-> ");
    scanf("%d", &price);

    discount = 0;
    if (price > 500)
    {
        discount = 3;
    }
    if (price > 1000)
    {
        discount = 5;
    }

    printf("Вам предоставляется скидка %d%%\n", discount);
    printf("Сумма с учетом скидки: %.2f руб.\n", price * (100-discount) * 0.01);

    return 0;
}