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
    printf("\n\n������� ��������� ������� � ��������\n\n");
    printf("====================================\n");
    printf("�������:\n");
    printf("��������� ��������: %d ������\n", a);
    printf("��������� ��������: %d ������\n", b);
    printf("��������� ��������: %d ������\n", c);
    printf("�����, ���������� �� �������: %d ������\n", d);
    printf("\n");
    printf("������:\n");
    printf("����� ���� �������: �������� %d + �������� %d + ������� %d  = %d ������\n", a, b, c, a + b + c);
    printf("����� � ������� ����� �����: �����, ���������� �� ������� %d - ����� ������� %d = %d ������\n", d, a + b + c, d - (a + b + c));
    printf("====================================\n\n");
    printf("����� ��������: %d ������\n", d - (a + b + c));
    return 0;
}