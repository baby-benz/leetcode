#include <stdio.h>
#include "combine.h"

int main() {
    unsigned int n = 13, k = 3;

    unsigned int returnSize;
    unsigned int *returnColumnSizes;

    unsigned int **combinations = combine(n, k, &returnSize, &returnColumnSizes);

    for (unsigned int i = 0; i < returnSize; i++) {
        for (unsigned int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", combinations[i][j]);
        }
        printf("\n");
    }

    return 0;
}
