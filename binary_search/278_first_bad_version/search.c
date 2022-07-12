//
// Created by baby-benz on 7/11/2022.
//

#include "search.h"

int isBadVersion(const int number) {
    if (number >= BAD_ELEMENT) {
        return 1;
    }
    return 0;
}

/// Performs an integer binary search using an external API to determine the search stop point
/// \param [in] n Unsigned long integer variable that contains the number of elements (1 \<= n)
/// \return element found
unsigned long search(const unsigned long n) {
    unsigned long left = 0;
    unsigned long right = n;
    unsigned long pivot;

    while (left != right) {
        pivot = (left + right) / 2;

        if (isBadVersion(pivot) == 1) {
            right = pivot;
        } else {
            left = pivot + 1;
        }
    }

    return left;
}
