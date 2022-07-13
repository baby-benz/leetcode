//
// Created by baby-benz on 7/12/2022.
//

#include <mem.h>
#include "rotate.h"

/// Rotates the elements of the input array to the right by the specified number of positions
/// \param [in, out] nums Integer array on which rotating will be performed
/// \param [in] numsSize Unsigned integer variable that contains the number of elements in the array
/// \param [in] k number of positions to rotate right
void rotate(int *nums, const unsigned int numsSize, const unsigned int k) {
    if (numsSize == 1) {
        return;
    }

    unsigned int toRotate = k % numsSize;
    unsigned int toShift = numsSize - toRotate;

    size_t toShiftSize = sizeof(int) * toShift;
    int curRotated;

    for (unsigned int i = 0, j = toShift; i < toRotate; i++, j++) {
        curRotated = nums[j];
        memcpy(&nums[i + 1], &nums[i], toShiftSize);
        nums[i] = curRotated;
    }
}
