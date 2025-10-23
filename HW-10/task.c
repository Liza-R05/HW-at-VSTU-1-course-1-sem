#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
// Площадь
float area_triangle(float a, float b) 
{
    return (a * b) / 2;
}
// Нарисовать
void draw_triangle(int a, int b) 
{
    printf("\n");
    for (int i = 1; i <= a; i++) 
    {
        int width = (i * b + a - 1) / a;
        for (int j = 1; j <= width; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
// Название
void name() 
{
    printf("Название фигуры: Прямоугольный треугольник\n\n");
}
// Определение
void op() 
{
    printf("\nОпределение: Прямоугольный треугольник - треугольник, у которого один угол прямой (90 градусов)\n");
}
void main() 
{
    setlocale(LC_ALL, "RUS");
    int с;
    float a, b;
    printf("Прямоугольный Треугольник\n");
    printf("1. Рассчитать площадь\n");
    printf("2. Вывести определение\n");
    printf("3. Нарисовать фигуру\n");
    printf("Выберите операцию: ");
    scanf("%d", &с);
    if (с == 1 || с == 3) {
        printf("Введите длину первого катета: ");
        scanf("%f", &a);
        printf("Введите длину второго катета: ");
        scanf("%f", &b);
    }
    switch (с) {
    case 1:
        printf("Площадь прямоугольного треугольника: %.2f\n", area_triangle(a, b));
        break;
    case 2:
        op();
        name();
        break;
    case 3:
        draw_triangle((int)a, (int)b);
        break;
    default:
        printf("Неверный выбор\n");
    }
    system("pause");
}