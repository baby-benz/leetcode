#include <stdio.h>
#include <malloc.h>
#include "merge_two_lists.h"

#define LIST_1_SIZE 3
#define LIST_2_SIZE 3

const int list1Vals[LIST_1_SIZE] = {1, 2, 4},
          list2Vals[LIST_2_SIZE] = {1, 3, 4};

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
    const struct ListNode *list1 = populate(list1Vals, 0, LIST_1_SIZE);
    const struct ListNode *list2 = populate(list2Vals, 0, LIST_2_SIZE);

    const struct ListNode *result = mergeTwoLists(list1, list2);

    while (1) {
        if (!result) {
            break;
        }
        printf("%d ", result->val);
        result = result->next;
    }
    printf("\n");

    return 0;
}
