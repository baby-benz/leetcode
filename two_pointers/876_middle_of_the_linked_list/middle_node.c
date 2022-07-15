//
// Created by baby-benz on 7/15/2022.
//

#include "middle_node.h"

struct ListNode *middleNode(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
