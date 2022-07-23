//
// Created by baby-benz on 7/23/2022.
//

#include <malloc.h>
#include "merge_two_lists.h"

struct ListNode *mergeTwoLists(const struct ListNode *list1, const struct ListNode *list2) {
    struct ListNode *result = malloc(sizeof(struct ListNode));

    if (!list1 && !list2) {
        result = NULL;
    } else if (!list1) {
        *result = *list2;
    } else if (!list2) {
        *result = *list1;
    } else {
        if (list1->val == list2->val ) {
            result->next = malloc(sizeof(struct ListNode));
            result->val = list1->val;
            result->next->val = list2->val;
            result->next->next = mergeTwoLists(list1->next, list2->next);
        } else if (list1->val > list2->val) {
            result->val = list2->val;
            result->next = mergeTwoLists(list1, list2->next);
        } else {
            result->val = list1->val;
            result->next = mergeTwoLists(list1->next, list2);
        }
    }

    return result;
}
