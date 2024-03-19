#include <stdio.h>

int main() 
{
    float a;

    printf("Ввод: ");
    scanf("%f", &a);

    if (a < 0) 
    {
        printf("Минусовое число\n");
        return 0;
    }

    printf("Вывод: ");

    if ((int)a / 10000 != 0 && (int)a / 1000 == 0)
    {
        switch((int) a / 10000)
        {
        case 1: printf("десять тысяч "); break;
        case 2: printf("двадцать тысяч "); break;
        case 3: printf("тридцать тысяч "); break;
        case 4: printf("сорок тысяч "); break;
        case 5: printf("пятдесят тысяч "); break;
        case 6: printf("шестьдесят тысяч "); break;
        case 7: printf("семьдесят тысяч "); break;
        case 8: printf("восемьдесят тысяч "); break;
        case 9: printf("девяносто тысяч "); break;
        }
    }
    else{
        switch((int) a / 10000)
        {
        case 1: printf("десять "); break;
        case 2: printf("двадцать "); break;
        case 3: printf("тридцать "); break;
        case 4: printf("сорок "); break;
        case 5: printf("пятдесят "); break;
        case 6: printf("шестьдесят "); break;
        case 7: printf("семьдесят "); break;
        case 8: printf("восемьдесят "); break;
        case 9: printf("девяносто "); break;
        }

        switch((int) a / 1000)
        {
        case 1: printf("тысяча "); break;
        case 2: printf("две тысячи "); break;
        case 3: printf("три тысячи "); break;
        case 4: printf("четыре тысячи "); break;
        case 5: printf("пять тысяч "); break;
        case 6: printf("шесть тысяч "); break;
        case 7: printf("семь тысяч "); break;
        case 8: printf("восемь тысяч "); break;
        case 9: printf("девять тысяч "); break;
        }
    }
    
    switch((int) a % 1000 / 100)
    {
    case 1: printf("сто "); break;
    case 2: printf("двести "); break;
    case 3: printf("триста "); break;
    case 4: printf("четыреста "); break;
    case 5: printf("пятсот "); break;
    case 6: printf("шестьсот "); break;
    case 7: printf("семьсот "); break;
    case 8: printf("восемьсот "); break;
    case 9: printf("девятьсот "); break;
    }

    switch (((int)a % 100) / 10)
    {
    case 2: printf("двадцать "); break;
    case 3: printf("тридцать "); break;
    case 4: printf("сорок "); break;
    case 5: printf("пятдесят "); break;
    case 6: printf("шестьдесят "); break;
    case 7: printf("семьдесят "); break;
    case 8: printf("восемьдесят "); break;
    case 9: printf("девяносто "); break;
    }

    if ((int)a % 100 >= 10 & (int)a % 100 < 20) {
        switch ((int)a % 100) {
        case 10: printf("десять рублей"); break;
        case 11: printf("одинадцать рублей "); break;
        case 12: printf("двенадцать рублей "); break;
        case 13: printf("тринадцать рублей "); break;
        case 14: printf("четырнадцать рублей "); break;
        case 15: printf("пятнадцать рублей "); break;
        case 16: printf("шестнадцать рублей "); break;
        case 17: printf("семнадцать рублей "); break;
        case 18: printf("восемнадцать рублей "); break;
        case 19: printf("девятнадцать рублей "); break;
        }
    }
    else {
        switch ((int)a % 10)
        {
        case 1: printf("один рубль "); break;
        case 2: printf("два рубля "); break;
        case 3: printf("три рубля "); break;
        case 4: printf("четыре рубля "); break;
        case 5: printf("пять рублей "); break;
        case 6: printf("шесть рублей "); break;
        case 7: printf("семь рублей "); break;
        case 8: printf("восемь рублей "); break;
        case 9: printf("девять рублей "); break;
        }
    }

    if ((a > 0 && (int)a%10==0) && !((int)a % 100 >= 10 & (int)a % 100 < 20))
    {
        printf("рублей ");
    }
    else if (a == 0)
    {
        printf("ноль рублей ");
    }

    return 0;
}