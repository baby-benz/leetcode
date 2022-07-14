#include <stdio.h>
#include "reverse_string.h"

#define s_size 5

int main() {
    char s[s_size + 1] = "hello";

    reverseString(s, s_size);

    printf("%s\n", s);

    return 0;
}
