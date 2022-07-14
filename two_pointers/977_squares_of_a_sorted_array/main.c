#include <stdio.h>
#include "sorted_squares.h"

int main() {
    const int numSize = 5;
    const int arr[] = {-4, -1, 0, 3, 10};

    unsigned int returnSize = 0;

    const int *sortedArr = sortedSquares(arr, numSize, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", sortedArr[i]);
    }
    printf("\n");

    return 0;
}
