#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() 
{
    setlocale(LC_ALL, "RUS");
    int day, month, year, c, daysInMonth;
    int totalDays = 0;
    printf("Введите дату (xx xx xxxx): ");
    scanf("%d%d%d", &day, &month, &year);
    printf("Выберите опцию:\n");
    printf("1 - До конца месяца\n");
    printf("2 - До конца года\n");
    printf("Ваш выбор: ");
    scanf("%d",&c);
    switch (c) 
    {
    case 1: 
    {
        switch (month) 
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                daysInMonth = 29;
            }
            else
            {
                daysInMonth = 28;
            }
            break;
        default:
            daysInMonth = 0;
        }
        printf("До конца месяца осталось %d дней\n", daysInMonth - day);
        break;
    }

    case 2: 
    {
        // Текущий месяц
        switch (month) 
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        default:
            daysInMonth = 0;
        }
        totalDays += daysInMonth - day;
        // Последующие месяцы
        for (int m = month + 1; m <= 12; m++) 
        {
            switch (m) 
            {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                totalDays += 31;
                break;
            case 4: case 6: case 9: case 11:
                totalDays += 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    totalDays += 29;
                else
                    totalDays += 28;
                break;
            }
        }
        printf("До конца года осталось %d дней\n", totalDays);
        break;
    }

    default:
        printf("Неверный ввод даты\n");
    }

    return 0;
}