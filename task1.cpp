#include <cstdio>
#include <omp.h>

int main() {
    omp_set_num_threads(8);
#pragma omp parallel
    {
        printf("tread num: %d\n", omp_get_thread_num());
        printf("num threads: %d\n", omp_get_num_threads());
        printf("Hello World!\n");
    }

    return 0;
}