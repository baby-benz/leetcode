//
// Created by baby-benz on 7/13/2022.
//

#include <malloc.h>
#include "two_sum.h"

unsigned int *twoSum(const int *numbers, const unsigned int numbersSize, const int target, unsigned int *returnSize) {
    *returnSize = 2;

    unsigned int sumIdx1 = 0;
    unsigned int sumIdx2 = numbersSize - 1;


    while (sumIdx1 < sumIdx2) {
        if (numbers[sumIdx1] + numbers[sumIdx2] == target) {
            unsigned int *result = malloc(sizeof(unsigned int) * 2);
            result[0] = sumIdx1 + 1;
            result[1] = sumIdx2 + 1;
            return result;
        } else if (numbers[sumIdx1] + numbers[sumIdx2] < target) {
            sumIdx1++;
        } else {
            sumIdx2--;
        }
    }

    return NULL;
}
