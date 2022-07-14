#include <stdio.h>
#include "two_sum.h"

int main() {
    int arr[] = {2, 7, 11, 15};

    const int target = 9;

    const int numSize = 4;
    unsigned int returnSize = 0;

    unsigned int *result = twoSum(arr, numSize, target, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
