//
// Created by baby-benz on 7/14/2022.
//

#include "reverse_words.h"

void reverseString(char *s, const unsigned int sSize) {
    char tmp;

    for (unsigned int i = 0, j = sSize - 1; i < j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

char *reverseWords(char *s) {
    unsigned int start = 0;
    unsigned int end = 0;

    while (s[end]) {
        end++;
        if (s[end] == ' ' || !s[end]) {
            reverseString(&s[start], end - start);
            start = end + 1;
        }
    }

    return s;
}
