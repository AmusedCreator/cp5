#include <iostream>

extern "C" void smth(void);
void smth(void) {
    int Msum = 0;
    int r = 9, c = 11;
    int Q[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Q[i][j] = rand() % 101 - 50;
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", Q[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (Q[i][j] % 5 == 1) {
                Msum += Q[i][j];
            }
        }
    }
    printf("sum in mat: %d\n", Msum);
}
