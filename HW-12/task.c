#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    char arr_char[2];
    short int arr_short[2];
    unsigned short int arr_ushort[2];
    int arr_int[2];
    unsigned char arr_uchar[2];
    wchar_t arr_wchar[2];
    long long int arr_llint[2];
    size_t arr_size_t[2];
    float arr_float[2];
    double arr_double[2];
    signed int arr_sint[2];

    // вычисляем размеры через разницу адресов элементов массива, тк в массивах элементы идут последовательно и
    // разница адресов соседних элементов равна размеру типа данных в байтах

    printf("1. char:               %ld байт\n", (long)((char*)&arr_char[1] - (char*)&arr_char[0]));
    printf("2. short int:          %ld байт\n", (long)((char*)&arr_short[1] - (char*)&arr_short[0]));
    printf("3. unsigned short int: %ld байт\n", (long)((char*)&arr_ushort[1] - (char*)&arr_ushort[0]));
    printf("4. int:                %ld байт\n", (long)((char*)&arr_int[1] - (char*)&arr_int[0]));
    printf("5. unsigned char:      %ld байт\n", (long)((char*)&arr_uchar[1] - (char*)&arr_uchar[0]));
    printf("6. wchar_t:            %ld байт\n", (long)((char*)&arr_wchar[1] - (char*)&arr_wchar[0]));
    printf("7. long long int:      %ld байт\n", (long)((char*)&arr_llint[1] - (char*)&arr_llint[0]));
    printf("8. size_t:             %ld байт\n", (long)((char*)&arr_size_t[1] - (char*)&arr_size_t[0]));
    printf("9. float:              %ld байт\n", (long)((char*)&arr_float[1] - (char*)&arr_float[0]));
    printf("10. double:            %ld байт\n", (long)((char*)&arr_double[1] - (char*)&arr_double[0]));
    printf("11. signed int:        %ld байт\n", (long)((char*)&arr_sint[1] - (char*)&arr_sint[0]));
    system("pause");
}
