#include <stdio.h>
#include "length_of_longest_substring.h"

int main() {
    char *s = "pwwkew";

    unsigned int len = lengthOfLongestSubstring(s);

    printf("%d\n", len);

    return 0;
}
