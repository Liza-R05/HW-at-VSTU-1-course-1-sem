#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	char s;
	int a, b;
    printf("������� ������ �� �������� ����� ��������� ������: ");
    scanf(" %c", &s);
    printf("������� ������ �����: ");
    scanf("%d", &a);
    printf("������� ������ �����: ");
    scanf("%d", &b);
    printf("������������� �����������:\n\n");
    for (int i = 1; i <= a; i++) 
    {
        int w = (i * b + a - 1) / a;
        for (int j = 1; j <= w; j++) 
        {
            printf("%c", s);
        }
        printf("\n");
    }
	system("pause");
}