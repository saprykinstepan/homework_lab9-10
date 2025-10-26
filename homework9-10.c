#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_square(float side);
void draw_square(int side, int angle, char symbol);
void name_square();

int main() {
    setlocale(LC_ALL, "");

    int choice;
    char symbol;
    int side, angle;

    printf("������� ������ ��� ���������: ");
    scanf(" %c", &symbol);

    printf("������� ����� ������� ��������: ");
    scanf("%d", &side);

    printf("������� ���� ������� (�������� �����): ");
    scanf("%d", &angle);

    do {
        printf("\n�������� ��������: \n");
        printf("1 - ���������� �������\n");
        printf("2 - ������� ����������� ��������\n");
        printf("3 - ���������� �������\n");
        printf("0 - �����\n");
        printf("��� �����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            printf("������� ��������: %.2f\n", area_square(side));
            break;
        }
        case 2: {
            name_square();
            break;
        }
        case 3: {
            draw_square(side, angle, symbol);
            break;
        }
        case 0:
            printf("����� �� ���������.\n");
            break;
        default:
            printf("�������� �����!\n");
        }
    } while (choice != 0);

    return 0;
}

float area_square(float side) {
    return side * side;
}

void draw_square(int side, int angle, char symbol) {
    printf("\n������� � ��������:\n");
    for (int i = 0; i < side; i++) {
        for (int space = 0; space < angle * i; space++) {
            printf(" ");
        }
        for (int j = 0; j < side; j++) {
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1) {
                printf("%c ", symbol);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void name_square() {
    printf("\n������� - ��� ���������� ��������������, ");
    printf("� �������� ��� ������� � ���� �����.\n");
    printf("��� ���� �������� ������ (90 ��������).\n");
}