#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	printf("Введите значение х: ");
	scanf("%f", &x);
	printf("\nx=%.1f", x);
	printf("\nВведите значение y: ");
	scanf("%f", &y);
	printf("\ny=%.1f", y);
	printf("\n=======================================\n");
	printf("\nРассчитаем значение F\n");
	printf("F=%f\n", (2.33 * log(sqrt(1+pow(cos(x),2))))/(exp(y)+pow(sin(x),2)));
	getchar();
}