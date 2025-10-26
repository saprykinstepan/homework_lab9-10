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

    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol);

    printf("Введите длину стороны квадрата: ");
    scanf("%d", &side);

    printf("Введите угол наклона (пробелов слева): ");
    scanf("%d", &angle);

    do {
        printf("\nВыберите операцию: \n");
        printf("1 - Рассчитать площадь\n");
        printf("2 - Вывести определение квадрата\n");
        printf("3 - Нарисовать квадрат\n");
        printf("0 - Выход\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            printf("Площадь квадрата: %.2f\n", area_square(side));
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
            printf("Выход из программы.\n");
            break;
        default:
            printf("Неверный выбор!\n");
        }
    } while (choice != 0);

    return 0;
}

float area_square(float side) {
    return side * side;
}

void draw_square(int side, int angle, char symbol) {
    printf("\nКвадрат с наклоном:\n");
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
    printf("\nКвадрат - это правильный четырёхугольник, ");
    printf("у которого все стороны и углы равны.\n");
    printf("Все углы квадрата прямые (90 градусов).\n");
}