#include <stdio.h>
#include <malloc.h>
#include "letter_case_permutation.h"

int main() {
    const char *s = "3Z4";

    unsigned int returnSize;

    char **permutations = letterCasePermutation(s, &returnSize);

    for (unsigned int i = 0; i < returnSize; i++) {
        printf("%s", permutations[i]);
        printf("\n");
        free(permutations[i]);
    }

    free(permutations);

    return 0;
}
