//
// Created by baby-benz on 7/15/2022.
//

#include <malloc.h>
#include "remove_nth_from_end.h"

void removeNode(struct ListNode **node) {
    struct ListNode *toDelete = *node;
    *node = (*node)->next;
    free(toDelete);
}

struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
    struct ListNode *windowEnd = head;

    for (int i = 0; i < n; i++) {
        windowEnd = windowEnd->next;
    }

    if (!windowEnd) {
        removeNode(&head);
        return head;
    }

    struct ListNode *windowStart = head;

    while (windowEnd->next) {
        windowStart = windowStart->next;
        windowEnd = windowEnd->next;
    }

    removeNode(&windowStart->next);
    return head;
}
