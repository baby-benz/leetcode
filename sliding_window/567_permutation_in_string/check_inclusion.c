//
// Created by baby-benz on 7/16/2022.
//

#include <string.h>
#include "check_inclusion.h"

bool checkInclusion(const char *s1, const char *s2) {
    unsigned int s1Len = strlen(s1);
    unsigned int s2Len = strlen(s2);

    if (s1Len > s2Len) {
        return false;
    }

    unsigned int s1Freqs[128] = {0};
    unsigned int s2Freqs[128] = {0};

    for (unsigned int i = 0; i < s1Len; i++) {
        s1Freqs[s1[i]]++;
        s2Freqs[s2[i]]++;
    }

    unsigned int freqsMatched = 0;

    for (unsigned int i = 97; i < 123; i++) {
        if (s1Freqs[i] == s2Freqs[i]) {
            freqsMatched++;
        }
    }

    if (freqsMatched == 26) {
        return true;
    }

    for (unsigned int i = s1Len, j = 0; i < s2Len; i++, j++) {
        s2Freqs[s2[i]]++;

        if (s2Freqs[s2[i]] == s1Freqs[s2[i]]) {
            freqsMatched++;
        } else if (s2Freqs[s2[i]] == s1Freqs[s2[i]] + 1) {
            freqsMatched--;
        }

        s2Freqs[s2[j]]--;

        if (s2Freqs[s2[j]] == s1Freqs[s2[j]]) {
            freqsMatched++;
        } else if (s2Freqs[s2[j]] == s1Freqs[s2[j]] - 1) {
            freqsMatched--;
        }

        if (freqsMatched == 26) {
            return true;
        }
    }

    return false;
}

/*bool checkInclusion(const char *s1, const char *s2) {
    unsigned int s1Len = strlen(s1);
    unsigned int s2Len = strlen(s2);
    if (strlen(s1) > strlen(s2))
        return false;
    int s1map[26] = {0};
    int s2map[26] = {0};

    for (int i = 0; i < strlen(s1); i++) {
        s1map[s1[i] - 'a']++;
        s2map[s2[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
        if (s1map[i] == s2map[i])
            count++;

    for (int i = 0; i < strlen(s2) - strlen(s1); i++) {
        int r = s2[i + strlen(s1)] - 'a', l = s2[i] - 'a';
        if (count == 26)
            return true;
        s2map[r]++;
        if (s2map[r] == s1map[r])
            count++;
        else if (s2map[r] == s1map[r] + 1)
            count--;
        s2map[l]--;
        if (s2map[l] == s1map[l])
            count++;
        else if (s2map[l] == s1map[l] - 1)
            count--;
    }
    return count == 26;
}*/
