#include"Header.h"

int main() {
    setlocale(LC_ALL, "rus");
    printf("���� ������� MxN � ������ � ���������. ���� � ����, ������� � ����.\n����� � ���������� � ������ ����� �������.\n");
    srand(time(NULL));
    int m, n;
    printf("������� ���������� ����� ");
    m = check(1, 40);
    printf("\n������� ���������� �������� ");
    n = check(1, 40);

    int** mass = createMass(n, m);
    inputRand(&mass, n, m);
    print(mass, m, n);
    printf("\n�������� ���������:\n");
    raskraska(&mass, m, n);
    printRaskraska(mass, m, n);
}