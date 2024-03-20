#include <stdio.h>

const int HUNDRED_MILLION = 100000000;
const int TEN_MILLION = 10000000;
const int MILLION = 1000000;
const int HUNDRED_THOUSAND = 100000;
const int TEN_THOUSAND = 10000;
const int THOUSAND = 1000;
const int HUNDRED = 100;
const int TEN = 10;

int main() 
{
    double a;

    printf("Ввод: ");
    scanf("%lf", &a);

    if (a < 0) 
    {
        printf("Минусовое число\n");
        return 0;
    }

    printf("Вывод: ");

    switch((int) a / HUNDRED_MILLION)
    {
    case 1: printf("сто "); break;
    case 2: printf("двести "); break;
    case 3: printf("триста "); break;
    case 4: printf("четыреста "); break;
    case 5: printf("пятьсот "); break;
    case 6: printf("шестьсот "); break;
    case 7: printf("семьсот "); break;
    case 8: printf("восемьсот "); break;
    case 9: printf("девятьсот "); break;
    }

    if ((int)a % HUNDRED_MILLION / TEN_MILLION != 0 && (int)a % TEN_MILLION / MILLION == 0)
    {
        switch((int) a % HUNDRED_MILLION / TEN_MILLION)
        {
        case 1: printf("десять миллионов "); break;
        case 2: printf("двадцать миллионов "); break;
        case 3: printf("тридцать миллионов "); break;
        case 4: printf("сорок миллионов "); break;
        case 5: printf("пятьдесят миллионов "); break;
        case 6: printf("шестьдесят миллионов "); break;
        case 7: printf("семьдесят миллионов "); break;
        case 8: printf("восемьдесят миллионов "); break;
        case 9: printf("девяносто миллионов "); break;
        }
    }
    else{
        if ((int) a % HUNDRED_MILLION / TEN_MILLION == 1)
        {
            switch((int) a % TEN_MILLION / MILLION)
            {
            case 0: printf("десять миллионов "); break;
            case 1: printf("одинадцать миллионов "); break;
            case 2: printf("двенадцать миллионов "); break;
            case 3: printf("тринадцать миллионов "); break;
            case 4: printf("четырнадцать миллионов "); break;
            case 5: printf("пятнадцать миллионов "); break;
            case 6: printf("шестнадцать миллионов "); break;
            case 7: printf("семнадцать миллионов "); break;
            case 8: printf("восемнадцать миллионов "); break;
            case 9: printf("девятнадцать миллионов "); break;
            }
        }
        else
        {
            switch((int) a % HUNDRED_MILLION / TEN_MILLION)
            {
            case 1: printf("десять "); break;
            case 2: printf("двадцать "); break;
            case 3: printf("тридцать "); break;
            case 4: printf("сорок "); break;
            case 5: printf("пятьдесят "); break;
            case 6: printf("шестьдесят "); break;
            case 7: printf("семьдесят "); break;
            case 8: printf("восемьдесят "); break;
            case 9: printf("девяносто "); break;
            }

            switch((int) a % TEN_MILLION / MILLION)
            {
            case 1: printf("один миллион "); break;
            case 2: printf("два миллиона "); break;
            case 3: printf("три миллиона "); break;
            case 4: printf("четыре миллиона "); break;
            case 5: printf("пять миллионов "); break;
            case 6: printf("шесть миллионов "); break;
            case 7: printf("семь миллионов "); break;
            case 8: printf("восемь миллионов "); break;
            case 9: printf("девять миллионов "); break;
            }
        }
    }

    switch((int) a % MILLION / HUNDRED_THOUSAND)
    {
    case 1: printf("сто "); break;
    case 2: printf("двести "); break;
    case 3: printf("триста "); break;
    case 4: printf("четыреста "); break;
    case 5: printf("пятьсот "); break;
    case 6: printf("шестьсот "); break;
    case 7: printf("семьсот "); break;
    case 8: printf("восемьсот "); break;
    case 9: printf("девятьсот "); break;
    }

    if ((int)a % HUNDRED_THOUSAND / TEN_THOUSAND != 0 && (int)a % TEN_THOUSAND / THOUSAND == 0)
    {
        switch((int) a % HUNDRED_THOUSAND / TEN_THOUSAND)
        {
        case 1: printf("десять тысяч "); break;
        case 2: printf("двадцать тысяч "); break;
        case 3: printf("тридцать тысяч "); break;
        case 4: printf("сорок тысяч "); break;
        case 5: printf("пятьдесят тысяч "); break;
        case 6: printf("шестьдесят тысяч "); break;
        case 7: printf("семьдесят тысяч "); break;
        case 8: printf("восемьдесят тысяч "); break;
        case 9: printf("девяносто тысяч "); break;
        }
    }
    else{
        if ((int) a % HUNDRED_THOUSAND / TEN_THOUSAND == 1)
        {
            switch((int) a % TEN_THOUSAND / THOUSAND)
            {
            case 0: printf("десять тысяч "); break;
            case 1: printf("одинадцать тысяч "); break;
            case 2: printf("двенадцать тысяч "); break;
            case 3: printf("тринадцать тысяч "); break;
            case 4: printf("четырнадцать тысяч "); break;
            case 5: printf("пятнадцать тысяч "); break;
            case 6: printf("шестнадцать тысяч "); break;
            case 7: printf("семнадцать тысяч "); break;
            case 8: printf("восемнадцать тысяч "); break;
            case 9: printf("девятнадцать тысяч "); break;
            }
        }
        else
        {
            switch((int) a % HUNDRED_THOUSAND / TEN_THOUSAND)
            {
            case 2: printf("двадцать "); break;
            case 3: printf("тридцать "); break;
            case 4: printf("сорок "); break;
            case 5: printf("пятьдесят "); break;
            case 6: printf("шестьдесят "); break;
            case 7: printf("семьдесят "); break;
            case 8: printf("восемьдесят "); break;
            case 9: printf("девяносто "); break;
            }

            switch((int) a % TEN_THOUSAND / THOUSAND)
            {
            case 1: printf("одна тысяча "); break;
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
    }
    
    switch((int) a % THOUSAND / HUNDRED)
    {
    case 1: printf("сто "); break;
    case 2: printf("двести "); break;
    case 3: printf("триста "); break;
    case 4: printf("четыреста "); break;
    case 5: printf("пятьсот "); break;
    case 6: printf("шестьсот "); break;
    case 7: printf("семьсот "); break;
    case 8: printf("восемьсот "); break;
    case 9: printf("девятьсот "); break;
    }

    switch (((int)a % HUNDRED) / TEN)
    {
    case 2: printf("двадцать "); break;
    case 3: printf("тридцать "); break;
    case 4: printf("сорок "); break;
    case 5: printf("пятьдесят "); break;
    case 6: printf("шестьдесят "); break;
    case 7: printf("семьдесят "); break;
    case 8: printf("восемьдесят "); break;
    case 9: printf("девяносто "); break;
    }

    if ((int)a % HUNDRED >= 10 & (int)a % HUNDRED < 20) {
        switch ((int)a % HUNDRED) {
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
        switch ((int)a % TEN)
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

    if ( a>=1 && (a > 0 && (int)a%10==0) && !((int)a % 100 >= 10 & (int)a % 100 < 20))
    {
        printf("рублей ");
    }
    else if (a<1)
    {
        printf("ноль рублей ");
    }

    long unsigned int cents = ((long unsigned int)(a * 100) % 100); 
    
    if (cents != 0)
    {
        if (cents % 10 != 0 || cents == 10)
        {
            switch (cents / TEN)
            {
            case 2: printf("двадцать "); break;
            case 3: printf("тридцать "); break;
            case 4: printf("сорок "); break;
            case 5: printf("пятьдесят "); break;
            case 6: printf("шестьдесят "); break;
            case 7: printf("семьдесят "); break;
            case 8: printf("восемьдесят "); break;
            case 9: printf("девяносто "); break;
            }

            if (cents >= 10 & cents < 20) {
                switch (cents) 
                {
                case 10: printf("десять копеек\n"); break;
                case 11: printf("одинадцать копеек\n"); break;
                case 12: printf("двенадцать копеек\n"); break;
                case 13: printf("тринадцать копеек\n"); break;
                case 14: printf("четырнадцать копеек\n"); break;
                case 15: printf("пятнадцать копеек\n"); break;
                case 16: printf("шестнадцать копеек\n"); break;
                case 17: printf("семнадцать копеек\n"); break;
                case 18: printf("восемнадцать копеек\n"); break;
                case 19: printf("девятнадцать копеек\n"); break;
                }
            }
            else {
                switch (cents % TEN)
                {
                case 1: printf("одна копейка\n"); break;
                case 2: printf("две копейки\n"); break;
                case 3: printf("три копейки\n"); break;
                case 4: printf("четыре копейки\n"); break;
                case 5: printf("пять копеек\n"); break;
                case 6: printf("шесть копеек\n"); break;
                case 7: printf("семь копеек\n"); break;
                case 8: printf("восемь копеек\n"); break;
                case 9: printf("девять копеек\n"); break;
                }
            }
        }
        else
        {
            switch (cents / TEN)
            {
            case 2: printf("двадцать копеек\n"); break;
            case 3: printf("тридцать копеек\n"); break;
            case 4: printf("сорок копеек\n"); break;
            case 5: printf("пятьдесят копеек\n"); break;
            case 6: printf("шестьдесят копеек\n"); break;
            case 7: printf("семьдесят копеек\n"); break;
            case 8: printf("восемьдесят копеек\n"); break;
            case 9: printf("девяносто копеек\n"); break;
            }
        }
        
    }
    else
    {
        printf("ноль копеек\n");
    }

    return 0;
}