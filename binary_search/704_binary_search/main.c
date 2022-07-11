#include <stdio.h>
#include "search.h"

int main() {
    const int arr[10] = {-1,0,3,5,9,12};
    printf("%d\n", search(arr, 6, 9));
    return 0;
}