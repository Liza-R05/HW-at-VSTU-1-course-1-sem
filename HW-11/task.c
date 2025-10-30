#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    int a[100];
    int n, i, k = -1;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    printf("Введите элементы массива:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (a[i] < 0 && a[i] % 3 == 0) 
        {
            k = i;
        }
    }
    if (k != -1) 
    {
        printf("Номер: %d\n", k + 1);
    }
    else 
    {
        printf("Не найден\n");
    }
    system("pause");
}