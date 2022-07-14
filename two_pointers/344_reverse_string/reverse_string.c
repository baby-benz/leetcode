//
// Created by baby-benz on 7/14/2022.
//

#include "reverse_string.h"

void reverseString(char *s, const unsigned int sSize) {
    char tmp;

    for (unsigned int i = 0, j = sSize - 1; i < j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
