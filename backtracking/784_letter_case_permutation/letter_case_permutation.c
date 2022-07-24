//
// Created by baby-benz on 7/24/2022.
//

#include <malloc.h>
#include <ctype.h>
#include <string.h>
#include "letter_case_permutation.h"

void backtrackPermute(char **perms, char *curPerm, const unsigned int stringSize, const unsigned int id, unsigned int *permsPos) {
    if (id == stringSize) {
        perms[*permsPos] = (char *) malloc(sizeof(char) * (stringSize + 1));
        strcpy(perms[*permsPos], curPerm);
        (*permsPos)++;
        return;
    }

    char c = curPerm[id];
    curPerm[id] = islower(c) ? toupper(c) : tolower(c);
    backtrackPermute(perms, curPerm, stringSize, id + 1, permsPos);

    if (isalpha(c)) {
        curPerm[id] = c;
        backtrackPermute(perms, curPerm, stringSize, id + 1, permsPos);
    }
}

char **letterCasePermutation(const char *s, unsigned int *returnSize) {
    *returnSize = 1;

    unsigned int alphaSize = 0;
    unsigned int stringSize = 0;

    for (unsigned int i = 0; s[i] != '\000'; i++) {
        stringSize++;
        alphaSize += isalpha(s[i]) ? 1 : 0;
    }

    for (int i = 0; i < alphaSize; i++) {
        *returnSize *= 2;
    }

    char **perms = (char **) malloc(sizeof(char *) * *returnSize);

    if (alphaSize == 0) {
        perms[0] = s;
        return perms;
    }

    char *curPerm = (char *) malloc(sizeof(char) * (stringSize + 1));
    strcpy(curPerm, s);

    unsigned int permsPos = 0;

    backtrackPermute(perms, curPerm, stringSize, 0, &permsPos);

    free(curPerm);

    return perms;
}
