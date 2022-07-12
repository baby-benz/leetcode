//
// Created by baby-benz on 7/12/2022.
//

#include <malloc.h>
#include "sorted_squares.h"

int *sortedSquares(const int *nums, const int numsSize, int *returnSize) {
    int start = 0;
    int end = numsSize - 1;

    *returnSize = numsSize;
    int* sortedSquares = (int *) malloc(sizeof(int) * numsSize);

    int startSquare = nums[start] * nums[start];
    int endSquare = nums[end] * nums[end];

    for (int i = end; i > 0; i--) {
        if (startSquare > endSquare) {
            sortedSquares[i] = startSquare;
            start++;
            startSquare = nums[start] * nums[start];
        } else {
            sortedSquares[i] = endSquare;
            end--;
            endSquare = nums[end] * nums[end];
        }
    }

    sortedSquares[0] = nums[start] * nums[start];

    return sortedSquares;
}
