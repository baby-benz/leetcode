//
// Created by baby-benz on 7/23/2022.
//

#ifndef INC_206_REVERSE_LINKED_LIST_REVERSE_LIST_H
#define INC_206_REVERSE_LINKED_LIST_REVERSE_LIST_H

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(const struct ListNode *head);

#endif //INC_206_REVERSE_LINKED_LIST_REVERSE_LIST_H
