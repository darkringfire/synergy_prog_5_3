#include <iostream>
#define MAXN 100
#define MAXM 100
#define MINX -2
#define MAXX 7

#define MAXRNDX (MAXX - MINX + 1)

int main() {
    int arr[MAXN][MAXM];
    int m, n;
    do {
        printf("Enter number of rows (1..%i):", MAXN);
        scanf("%i", &n);
    } while (n < 1 || n > MAXN);
    do {
        printf("Enter number of columns (1..%i):", MAXM);
        scanf("%i", &m);
    } while (m < 1 || m > MAXM);

    srand(time(NULL));
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            arr[j][i] = rand() % MAXRNDX + MINX;
        }
    }

    printf("Generated array:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%6i", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
