//
// Created by baby-benz on 7/24/2022.
//

#include <malloc.h>
#include <memory.h>
#include "combine.h"

unsigned long long int fact(unsigned int n) {
    unsigned long long int fact = 1;
    for (unsigned int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

void backtrackCombine(unsigned int **combs, unsigned int *curComb, const unsigned int n, const unsigned int k,
                      const unsigned int start, const unsigned int end, unsigned int curCombPos,
                      unsigned int *combsPos) {
    if (end == 0) {
        combs[*combsPos] = (unsigned int *) malloc(sizeof(unsigned int) * k);
        memcpy(combs[*combsPos], curComb, sizeof(unsigned int) * k);
        (*combsPos)++;
        return;
    }
    for (unsigned int i = start; i <= n - end + 1; i++) {
        curComb[curCombPos] = i;
        backtrackCombine(combs, curComb, n, k, i + 1, end - 1, curCombPos + 1, combsPos);
    }
}

unsigned int **
combine(const unsigned int n, const unsigned int k, unsigned int *returnSize, unsigned int **returnColumnSizes) {
    unsigned long long int nFact = fact(n), kFact = fact(k), nMinusKFact = fact(n - k);

    unsigned int combsNum = nFact / (kFact * nMinusKFact);

    *returnSize = combsNum;

    *returnColumnSizes = (unsigned int *) malloc(sizeof(unsigned int) * combsNum);

    for (unsigned int i = 0; i < combsNum; i++) {
        (*returnColumnSizes)[i] = k;
    }

    unsigned int **combs = (unsigned int **) malloc(sizeof(unsigned int *) * combsNum);
    unsigned int *curComb = (unsigned int *) malloc(sizeof(unsigned int) * k);

    unsigned int combsPos = 0;

    backtrackCombine(combs, curComb, n, k, 1, k, 0, &combsPos);

    return combs;
}
