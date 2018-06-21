#include <stdio.h>

#define LEN 100000000
#define NUM_ITER 1000

int main() {
    int arr[LEN], i, j;

    for (i = 0; i < NUM_ITER; i++) {
        for (j = 0; j < LEN; j++)
            arr[j] = 5;
    }

    return 0;
}
