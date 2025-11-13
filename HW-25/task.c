#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// заполнение массива случайными числами от 1 до K
int* full_elements(int* ptr_array, int n, int K)
{
    for (int i = 0; i < n; i++)
    {
        ptr_array[i] = 1 + rand() % K;
    }
    return ptr_array;
}

// печать массива
int put_elements(int* ptr_array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%d] = %d\n", i, ptr_array[i]);
    }
    return n;
}

// реверс элементов
int* reverse_array(int* start, int* end, int* new_size)
{
    int size = end - start + 1;
    *new_size = size;
    int* reversed = (int*)malloc(size * sizeof(int));
    if (reversed == NULL)
    {
        printf("error\n");
        return NULL;
    }
    for (int i = 0; i < size; i++)
    {
        reversed[i] = start[size - 1 - i];
    }
    return reversed;
}

void main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    int K, N;
    printf("Введите K (максимальное значение): ");
    scanf("%d", &K);
    printf("Введите N (количество элементов): ");
    scanf("%d", &N);
    int* array = (int*)malloc(N * sizeof(int));
    if (array == NULL)
    {
        printf("error\n");
        return -1;
    }
    full_elements(array, N, K);
    printf("\nИсходный массив (%d элементов):\n", N);
    put_elements(array, N);
    // реверс массива
    int new_size;
    int* reversed_array = reverse_array(&array[0], &array[N - 1], &new_size);
    if (reversed_array != NULL)
    {
        printf("\nРеверсированный массив (%d элементов):\n", new_size);
        put_elements(reversed_array, new_size);
        free(reversed_array);
    }
    free(array);
    system("pause");
}
