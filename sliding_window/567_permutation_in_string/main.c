#include <stdio.h>
#include "check_inclusion.h"

int main() {
    char *s1 = "trinitrophenylmethylnitramine", *s2 = "dinitrophenylhydrazinetrinitrophenylmethylnitramine";

    printf("%s\n", checkInclusion(s1, s2) ? "true" : "false");

    return 0;
}
