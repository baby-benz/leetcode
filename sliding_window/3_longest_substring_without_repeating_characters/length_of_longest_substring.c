//
// Created by baby-benz on 7/15/2022.
//

#include <string.h>
#include "length_of_longest_substring.h"

unsigned int lengthOfLongestSubstring(const char *s) {
    int occurIdx[128];
    memset(occurIdx, -1, sizeof(int) * 128);

    unsigned int maxSubstrLen = 0;
    unsigned int curSubstrLen = 0;

    int windowStart = 0;

    for (int i = 0; s[i] != '\000'; i++) {
        if (occurIdx[s[i]] < windowStart) {
            curSubstrLen++;
        } else {
            if (curSubstrLen > maxSubstrLen) {
                maxSubstrLen = curSubstrLen;
            }
            curSubstrLen = i - occurIdx[s[i]];
            windowStart = occurIdx[s[i]] + 1;
        }

        occurIdx[s[i]] = i;
    }

    if (curSubstrLen > maxSubstrLen) {
        maxSubstrLen = curSubstrLen;
    }

    return maxSubstrLen;
}
