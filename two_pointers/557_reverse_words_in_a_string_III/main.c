#include <stdio.h>
#include "reverse_words.h"

int main() {
    char s[] = "Let's take LeetCode contest";

    reverseWords(s);

    printf("%s\n", s);

    return 0;
}
