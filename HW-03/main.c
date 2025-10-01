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
	printf("=== РАСЧЕТ СТОИМОСТИ ПОКУПКИ ===\n\n");
	printf("Введите количество товара: ");
	scanf("%d", &q);
	printf("Введите стоимость единицы товара: ");
	scanf("%f", &price);
	printf("\n=======================================\n");
	printf("Количество: %d шт.\n", q);
	printf("Цена за шт.: %.2f руб.\n", price);
	printf("---------------------------------------\n");
	printf("ИТОГО: %.2f руб.\n", q * price);
	printf("=======================================\n");
}