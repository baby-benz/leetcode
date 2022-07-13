#include <stdio.h>
#include "rotate.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    const int numSize = 7;
    const int k = 3;

    rotate(arr, numSize, k);

    for (int i = 0; i < numSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
