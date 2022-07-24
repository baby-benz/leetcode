//
// Created by baby-benz on 7/24/2022.
//

#include <malloc.h>
#include <memory.h>
#include "permute.h"

unsigned long long int fact(unsigned int n) {
    unsigned long long int fact = 1;
    for (unsigned int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

void swap(int *nums, unsigned int x, unsigned int y) {
    int temp = nums[x];
    nums[x] = nums[y];
    nums[y] = temp;
}

void backtrackPermute(int **perms, int *curPerm, const unsigned int numsSize, const unsigned int start,
                      const unsigned int end, unsigned int *permsPos) {
    if (start == end) {
        perms[*permsPos] = (int *) malloc(sizeof(int) * numsSize);
        memcpy(perms[*permsPos], curPerm,  sizeof(int) * numsSize);
        (*permsPos)++;
        return;
    }
    for (unsigned int i = start; i < end; i++) {
        swap(curPerm, start, i);
        backtrackPermute(perms, curPerm, numsSize, start + 1, end, permsPos);
        swap(curPerm, start, i);
    }
}

int **
permute(const int *nums, const unsigned int numsSize, unsigned int *returnSize, unsigned int **returnColumnSizes) {
    *returnSize = fact(numsSize);
    *returnColumnSizes = (unsigned int *) malloc(sizeof(unsigned int) * *returnSize);

    for (unsigned int i = 0; i < *returnSize; i++) {
        (*returnColumnSizes)[i] = numsSize;
    }

    int **perms = (int **) malloc(sizeof(int *) * *returnSize);
    int *curPerm = (int *) malloc(sizeof(int) * numsSize);
    memcpy(curPerm, nums, sizeof(int) * numsSize);

    unsigned int permsPos = 0;

    backtrackPermute(perms, curPerm, numsSize, 0, numsSize, &permsPos);

    return perms;
}
