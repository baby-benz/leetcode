//
// Created by baby-benz on 7/24/2022.
//

#include "climb_stairs.h"

unsigned int climbStairs(const unsigned int n) {
    if (n < 2) {
        return n;
    }

    unsigned int oneStepsCnt = 2;
    unsigned int twoStepsCnt = 1;
    unsigned int stepsSum = 2;

    for(unsigned int i = 2; i < n; i++){
        stepsSum = oneStepsCnt + twoStepsCnt;
        twoStepsCnt = oneStepsCnt;
        oneStepsCnt = stepsSum;
    }

    return stepsSum;
}
