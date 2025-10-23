#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
// �������
float area_triangle(float a, float b) 
{
    return (a * b) / 2;
}
// ����������
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
// ��������
void name() 
{
    printf("�������� ������: ������������� �����������\n\n");
}
// �����������
void op() 
{
    printf("\n�����������: ������������� ����������� - �����������, � �������� ���� ���� ������ (90 ��������)\n");
}
void main() 
{
    setlocale(LC_ALL, "RUS");
    int �;
    float a, b;
    printf("������������� �����������\n");
    printf("1. ���������� �������\n");
    printf("2. ������� �����������\n");
    printf("3. ���������� ������\n");
    printf("�������� ��������: ");
    scanf("%d", &�);
    if (� == 1 || � == 3) {
        printf("������� ����� ������� ������: ");
        scanf("%f", &a);
        printf("������� ����� ������� ������: ");
        scanf("%f", &b);
    }
    switch (�) {
    case 1:
        printf("������� �������������� ������������: %.2f\n", area_triangle(a, b));
        break;
    case 2:
        op();
        name();
        break;
    case 3:
        draw_triangle((int)a, (int)b);
        break;
    default:
        printf("�������� �����\n");
    }
    system("pause");
}