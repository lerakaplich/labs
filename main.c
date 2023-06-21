#include"Header.h"

int main() {
    setlocale(LC_ALL, "rus");
    printf("Дана матрица MxN с нулями и единицами. Нули — вода, единицы — суша.\nНайти и раскрасить в разные цвета острова.\n");
    srand(time(NULL));
    int m, n;
    printf("Введите количество строк ");
    m = check(1, 40);
    printf("\nВведите количество столбцов ");
    n = check(1, 40);

    int** mass = createMass(n, m);
    inputRand(&mass, n, m);
    print(mass, m, n);
    printf("\nИтоговый результат:\n");
    raskraska(&mass, m, n);
    printRaskraska(mass, m, n);
}