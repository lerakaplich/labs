#include"Header.h"

int** createMass(int n, int m) {
    int** mass = (int**)calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        mass[i] = (int*)calloc(n, sizeof(int));
    }
    return mass;
}
void inputRand(int*** mass, int n, int m) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            (*mass)[i][j] = rand() % 2;
        }
    }
}
void print(int** mass, int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", mass[i][j]);
        }
        printf("\n");
    }
}
void printRaskraska(int** mass, int m, int n) {
    char c[4];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mass[i][j] == 0) {
                printf("\033[1;37m%d\t\033[0m", mass[i][j]);
            }
            else {
                _itoa(mass[i][j] * 5, c, 10);
                printf("\033[5;38;5;%sm1\t\033[0m", c);
            }
        }
        printf("\n");
    }
}
void cryzhik(int*** mass, int m, int n, int i, int j, int a) {
    if (i < 0 || i >= m || j < 0 || j >= n)
        return;
    if ((*mass)[i][j] != 1)
        return;
    (*mass)[i][j] = a;
    cryzhik(mass, m, n, i - 1, j, a);
    cryzhik(mass, m, n, i, j - 1, a);
    cryzhik(mass, m, n, i, j + 1, a);
    cryzhik(mass, m, n, i + 1, j, a);
}
void raskraska(int*** mass, int m, int n) {
    int a = 2;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((*mass)[i][j] == 1) {
                cryzhik(mass, m, n, i, j, a);
                a++;
            }
        }
    }
}
int check(int x, int y) {
    int a;
    scanf_s("%d", &a);
    while (getchar() != '\n' || a < x || a > y)
    {
        rewind(stdin);
        printf("Ну что же вы... ладно, попробуйте ещё раз\n");
        scanf_s("%d", &a);
    }
    return a;
}