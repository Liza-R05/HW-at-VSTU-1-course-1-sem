#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    int a[100];
    int n, i, k = -1;
    printf("������� ������ �������: ");
    scanf("%d", &n);
    printf("������� �������� �������:\n");
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
        printf("�����: %d\n", k + 1);
    }
    else 
    {
        printf("�� ������\n");
    }
    system("pause");
}