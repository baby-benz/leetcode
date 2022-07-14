//
// Created by baby-benz on 7/13/2022.
//

#include "move_zeroes.h"

void moveZeroes(int *nums, const unsigned int numsSize) {
    int cur;
    for (unsigned int i = 0, j = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            cur = nums[i];
            nums[i] = 0;
            nums[j] = cur;
            j++;
        }
    }
}