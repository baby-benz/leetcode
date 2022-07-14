#include <stdio.h>
#include "move_zeroes.h"

int main() {
    int arr[] = {0, 1, 0, 3, 12};

    const int numSize = 5;

    moveZeroes(arr, numSize);

    for (int i = 0; i < numSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
