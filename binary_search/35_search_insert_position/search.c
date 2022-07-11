//
// Created by baby-benz on 7/11/2022.
//

#include "search.h"

/// Looks for the position where the given element would be inserted using an integer binary search
/// \param [in] nums Integer array on which the search is performed
/// \param [in] numsSize Unsigned integer variable that contains the number of elements in the array
/// \param [in] target Integer variable that contains the element to be inserted
/// \return index of the element
unsigned int search(const int *nums, const unsigned int numsSize, const int target) {
    unsigned int left = 0;
    unsigned int right = numsSize;
    unsigned int pivot;

    while (left < right) {
        pivot = (right + left) / 2;

        if (nums[pivot] == target) {
            return pivot;
        } else if (nums[pivot] < target) {
            left = pivot + 1;
        } else {
            right = pivot;
        }
    }

    return left;
}
