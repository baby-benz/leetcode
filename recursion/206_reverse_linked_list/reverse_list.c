//
// Created by baby-benz on 7/23/2022.
//

#include <malloc.h>
#include "reverse_list.h"

struct ListNode *reverseList(const struct ListNode *head) {
    if (!head) {
        return NULL;
    }

    struct ListNode *result = (struct ListNode *) malloc(sizeof(struct ListNode));
    *result = *head;

    struct ListNode *prev = NULL;
    struct ListNode *cur = result;
    struct ListNode *next;

    while (cur) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    result = prev;
    return result;
}
