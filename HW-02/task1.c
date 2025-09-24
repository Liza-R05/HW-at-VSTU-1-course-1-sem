#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    const int a = 50; 
    const int b = 700;
    const int c = 300;
    const int d = 1500;
    printf("%d + %d + %d = %d \n", a, b, c, a+b+c);
    printf("%d - %d = %d \n", d, a+b+c, d-(a + b + c));
    printf("\n\nРассчет стоимости покупки в магазине\n\n");
    printf("====================================\n");
    printf("Условия:\n");
    printf("Стоимость перчаток: %d рублей\n", a);
    printf("Стоимость портфеля: %d рублей\n", b);
    printf("Стоимость галстука: %d рублей\n", c);
    printf("Сумма, выделенная на покупку: %d рублей\n", d);
    printf("\n");
    printf("Расчет:\n");
    printf("Сумма всех покупок: перчатки %d + порфтель %d + галстук %d  = %d рублей\n", a, b, c, a + b + c);
    printf("Сдача с покупки будет равна: сумма, выделенная на пакупки %d - сумма покупок %d = %d рублей\n", d, a + b + c, d - (a + b + c));
    printf("====================================\n\n");
    printf("Сдача составит: %d рублей\n", d - (a + b + c));
    return 0;
}