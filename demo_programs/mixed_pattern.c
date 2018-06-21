#include <stdio.h>

#define LEN1 100
#define LEN2 1000000
#define NUM_ITER 1000

int main() {
    int arr1[LEN1];
    int arr2[LEN2];
    int i, j;

    for (i = 0; i < NUM_ITER; i++) {
        for (j = 0; j < LEN1; j++)
            arr1[j] = 5;
        for (j = LEN1 - 1; j >= 0; j--)
            arr1[j] = 5;
        for (j = 0; j < LEN2; j++)
            arr2[j] = 5;
    }

    return 0;
}
