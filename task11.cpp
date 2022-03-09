#include <iostream>
#include <omp.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>

int main() {
    const int n = 30;

    int m[n];
    srand(time(NULL));
    int k = 0;
    for (int i = 0; i < n; i++) {
        {
            m[i] = rand() % 90 + 10;
            printf("%d ", m[i]);
        }
        if (k == 4) {
            printf("\n");
            k = 0;
        } else
            k++;
    }

    int count = 0;
#pragma omp parallel for shared(count)
    for (int i = 0; i < n; ++i) {
        if (m[i] % 9 == 0)
#pragma omp atomic
            count++;
    }
    printf("\ncount the number of multiples of 9 = %d\n", count);

    return 0;
}