//
// Created by baby-benz on 7/12/2022.
//

#include <malloc.h>
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

    unsigned int toShift = k % numsSize;

    size_t rotatePartSize = sizeof(int) * toShift;

    int *rotatePart = (int *) malloc(rotatePartSize);

    unsigned int rotatePartStart = numsSize - toShift;

    memcpy(rotatePart, &nums[rotatePartStart], rotatePartSize);

    size_t remainingPartSize = sizeof(int) * rotatePartStart;

    memmove(&nums[toShift], nums, remainingPartSize);

    memcpy(nums, rotatePart, rotatePartSize);

    free(rotatePart);
}
