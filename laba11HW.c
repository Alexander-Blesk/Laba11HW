#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>

// Описание структуры 
struct Car {
    char brand[10];        // марка автомобиля
    char manufacturer[10]; // производитель
    char type[10];         // тип
    int releaseYear;       // год выпуска
    int regYear;           // год регистрации
};

int main() {
    setlocale(LC_CTYPE, "RUS");
    // Объявление 3 переменных структурного типа
    struct Car car1, car2, car3;
    int foundCount = 0;

    // Ввод данных первой структуры
    printf("--- Ввод данных об автомобиле #1 ---\n");
    printf("Марка автомобиля: ");
    scanf("%s", car1.brand);
    printf("Производитель: ");
    scanf("%s", car1.manufacturer);
    printf("Тип: ");
    scanf("%s", car1.type);
    printf("Год выпуска: ");
    scanf("%d", &car1.releaseYear);
    printf("Год регистрации: ");
    scanf("%d", &car1.regYear);

    // Ввод данных второй структуры
    printf("\n--- Ввод данных об автомобиле #2 ---\n");
    printf("Марка автомобиля: ");
    scanf("%s", car2.brand);
    printf("Производитель: ");
    scanf("%s", car2.manufacturer);
    printf("Тип: ");
    scanf("%s", car2.type);
    printf("Год выпуска: ");
    scanf("%d", &car2.releaseYear);
    printf("Год регистрации: ");
    scanf("%d", &car2.regYear);

    // Ввод данных третьей структуры
    printf("\n--- Ввод данных об автомобиле #3 ---\n");
    printf("Марка автомобиля: ");
    scanf("%s", car3.brand);
    printf("Производитель: ");
    scanf("%s", car3.manufacturer);
    printf("Тип: ");
    scanf("%s", car3.type);
    printf("Год выпуска: ");
    scanf("%d", &car3.releaseYear);
    printf("Год регистрации: ");
    scanf("%d", &car3.regYear);

    // Обработка 3 переменных структурного типа согласно варианту:
    // отбор автомобилей марки Toyota, зарегистрированных до 2007 года
    printf("\n=== Автомобили марки Toyota, зарегистрированные до 2007 года ===\n");

    if (strcmp(car1.brand, "Toyota") == 0 && car1.regYear < 2007) {
        printf("Марка: %s | Производитель: %s | Тип: %s | Год выпуска: %d | Год регистрации: %d\n",
            car1.brand, car1.manufacturer, car1.type, car1.releaseYear, car1.regYear);
        foundCount++;
    }

    if (strcmp(car2.brand, "Toyota") == 0 && car2.regYear < 2007) {
        printf("Марка: %s | Производитель: %s | Тип: %s | Год выпуска: %d | Год регистрации: %d\n",
            car2.brand, car2.manufacturer, car2.type, car2.releaseYear, car2.regYear);
        foundCount++;
    }

    if (strcmp(car3.brand, "Toyota") == 0 && car3.regYear < 2007) {
        printf("Марка: %s | Производитель: %s | Тип: %s | Год выпуска: %d | Год регистрации: %d\n",
            car3.brand, car3.manufacturer, car3.type, car3.releaseYear, car3.regYear);
        foundCount++;
    }

    if (foundCount == 0) {
        printf("Подходящих автомобилей не найдено.\n");
    }

    return 0;
}