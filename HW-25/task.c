#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// заполнение массива случайными числами от -1 до 1
double* full_elements(double* ptr_array, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        ptr_array[i] = -1.0 + 2.0 * rand() / RAND_MAX;
    }
    return ptr_array;
}

// печать элементов массива
int put_elements(double* ptr_array, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("[%d] = %.2f\n", i, ptr_array[i]);
    }
    return n;
}

// реверс элементов массива
double* reverse_array(double* start, double* end, int* new_size) 
{
    int size = end - start + 1;
    *new_size = size;
    double* revers = (double*)malloc(size * sizeof(double));
    if (revers == NULL) 
    {
        printf("error\n");
        return NULL;
    }

    for (int i = 0; i < size; i++) 
    {
        revers[i] = start[size - 1 - i];
    }
    return revers;
}

void main() 
{
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    int n = 10 + rand() % 41;
    // заполнение массива, выд. память
    double* a = (double*)malloc(n * sizeof(double));
    if (a == NULL) 
    {
        printf("error\n");
        return -1;
    }
    full_elements(a, n);
    // реверс. массива
    int new_size;
    double* revers = reverse_array(&a[0], &a[n - 1], &new_size);
    if (revers == NULL) 
    {
        printf("error\n");
        free(a);
        return -1;
    }
    printf("Исходный массив (%d элементов):\n", n);
    put_elements(a, n);
    printf("\nРеверсированный массив (%d элементов):\n", new_size);
    put_elements(revers, new_size);
    free(a);
    free(revers);
    system("pause");
}
