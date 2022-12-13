#include <iostream>

extern "C" void smth(void);
void smth(void) {
    int Asum = 0;
    int s = 38;
    int R[s];

    for (int i = 0; i < s; i++) {
        R[i] = rand() % 101 - 50;
    }

    for (int i = 0; i < s; i++) {
        printf("%d ", R[i]);
    }
    printf("\n");

    for (int i = 0; i < s; i++) {
        Asum += R[i];
    }
    printf("sum in arr: %d\n", Asum);
}
