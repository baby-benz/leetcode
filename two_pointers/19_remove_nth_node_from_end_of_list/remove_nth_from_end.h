//
// Created by baby-benz on 7/15/2022.
//

#ifndef INC_19_REMOVE_NTH_NODE_FROM_END_OF_LIST_REMOVE_NTH_FROM_END_H
#define INC_19_REMOVE_NTH_NODE_FROM_END_OF_LIST_REMOVE_NTH_FROM_END_H

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *removeNthFromEnd(struct ListNode *head, int n);

#endif //INC_19_REMOVE_NTH_NODE_FROM_END_OF_LIST_REMOVE_NTH_FROM_END_H
