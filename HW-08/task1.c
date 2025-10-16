#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    double p = 1;
    printf("Вычисление произведения (1 + sin(0.1)) * (1 + sin(0.2)) * ... * (1 + sin(10))\n\n");
    
    for (double x = 0.1; x <= 10.0; x += 0.1) 
    {
        double t = 1 + sin(x);
        p = t;
    }

    printf("\nPезультат: %.4f\n", p);
    return 0;
    system("pause");
}