#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    char a_char[2];
    short int a_short[2];
    unsigned short int a_ushort[2];
    int a_int[2];
    unsigned char a_uchar[2];
    wchar_t a_wchar[2];
    long long int a_llint[2];
    size_t a_size_t[2];
    float a_float[2];
    double a_double[2];
    signed int a_sint[2];

    // вычисляем размеры через разницу адресов элементов массива, тк в массивах элементы идут последовательно и
    // разница адресов соседних элементов равна размеру типа данных в байтах

    printf("1. char:               %ld байт\n", (long)((char*)&a_char[1] - (char*)&a_char[0]));
    printf("2. short int:          %ld байт\n", (long)((char*)&a_short[1] - (char*)&a_short[0]));
    printf("3. unsigned short int: %ld байт\n", (long)((char*)&a_ushort[1] - (char*)&a_ushort[0]));
    printf("4. int:                %ld байт\n", (long)((char*)&a_int[1] - (char*)&a_int[0]));
    printf("5. unsigned char:      %ld байт\n", (long)((char*)&a_uchar[1] - (char*)&a_uchar[0]));
    printf("6. wchar_t:            %ld байт\n", (long)((char*)&a_wchar[1] - (char*)&a_wchar[0]));
    printf("7. long long int:      %ld байт\n", (long)((char*)&a_llint[1] - (char*)&a_llint[0]));
    printf("8. size_t:             %ld байт\n", (long)((char*)&a_size_t[1] - (char*)&a_size_t[0]));
    printf("9. float:              %ld байт\n", (long)((char*)&a_float[1] - (char*)&a_float[0]));
    printf("10. double:            %ld байт\n", (long)((char*)&a_double[1] - (char*)&a_double[0]));
    printf("11. signed int:        %ld байт\n", (long)((char*)&a_sint[1] - (char*)&a_sint[0]));
    system("pause");
}

