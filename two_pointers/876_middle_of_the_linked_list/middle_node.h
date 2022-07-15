//
// Created by baby-benz on 7/15/2022.
//

#ifndef INC_876_MIDDLE_OF_THE_LINKED_LIST_MIDDLE_NODE_H
#define INC_876_MIDDLE_OF_THE_LINKED_LIST_MIDDLE_NODE_H

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *middleNode(struct ListNode *head);

#endif //INC_876_MIDDLE_OF_THE_LINKED_LIST_MIDDLE_NODE_H
