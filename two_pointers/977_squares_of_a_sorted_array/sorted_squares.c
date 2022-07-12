//
// Created by baby-benz on 7/12/2022.
//

#include <malloc.h>
#include "sorted_squares.h"

/// Returns a sorted array containing the squares of the elements of the given array
/// \param [in] nums Integer input array
/// \param [in] numsSize Unsigned integer variable that contains the number of elements in the array
/// \param [out] returnSize Unsigned integer variable that contains the number of elements in the array
/// \return Integer sorted array containing the squares of the elements
int *sortedSquares(const int *nums, const unsigned int numsSize, unsigned int *returnSize) {
    unsigned int start = 0;
    unsigned int end = numsSize - 1;

    *returnSize = numsSize;
    int* sortedSquares = (int *) malloc(sizeof(int) * numsSize);

    int startSquare = nums[start] * nums[start];
    int endSquare = nums[end] * nums[end];

    for (unsigned int i = end; i > 0; i--) {
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
