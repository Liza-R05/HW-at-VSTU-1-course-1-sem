#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int q;
	float price, total;
	printf("=== ������ ��������� ������� ===\n\n");
	printf("������� ���������� ������: ");
	scanf("%d", &q);
	printf("������� ��������� ������� ������: ");
	scanf("%f", &price);
	printf("\n=======================================\n");
	printf("����������: %d ��.\n", q);
	printf("���� �� ��.: %.2f ���.\n", price);
	printf("---------------------------------------\n");
	printf("�����: %.2f ���.\n", q * price);
	printf("=======================================\n");
}