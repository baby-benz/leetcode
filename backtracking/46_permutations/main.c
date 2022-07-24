#include <stdio.h>
#include <malloc.h>
#include "permute.h"

#define NUMS_SIZE 3

int main() {
    const int nums[NUMS_SIZE] = {1, 2, 3};

    unsigned int returnSize;
    unsigned int *returnColumnSizes;

    int **permutations = permute(nums, NUMS_SIZE, &returnSize, &returnColumnSizes);

    for (unsigned int i = 0; i < returnSize; i++) {
        for (unsigned int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", permutations[i][j]);
        }
        free(permutations[i]);
        printf("\n");
    }

    free(permutations);

    return 0;
}
