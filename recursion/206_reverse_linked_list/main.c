#include <stdio.h>
#include <malloc.h>
#include "reverse_list.h"

#define LIST_SIZE 5

const int listVals[LIST_SIZE] = {1, 2, 3, 4, 5};

struct ListNode *populate(const int arr[], int i, int n) {
    struct ListNode *root = NULL;
    if (i < n) {
        root = (struct ListNode *) malloc(sizeof(struct ListNode));

        root->val = arr[i];

        root->next = NULL;

        root->next = populate(arr, i + 1, n);
    }
    return root;
}

int main() {
    const struct ListNode *list = populate(listVals, 0, LIST_SIZE);

    const struct ListNode *result = reverseList(list);

    while (result) {
        printf("%d ", result->val);
        result = result->next;
    }
    printf("\n");

    return 0;
}
