//
// Created by baby-benz on 7/13/2022.
//

#include "rotate.h"

void reverse(int arr[], unsigned int start, unsigned int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

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

    reverse(nums, toShift, numsSize - 1);
    reverse(nums, 0, toShift - 1);
    reverse(nums, 0, numsSize - 1);
}
