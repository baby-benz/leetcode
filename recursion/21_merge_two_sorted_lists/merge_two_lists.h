//
// Created by baby-benz on 7/23/2022.
//

#ifndef INC_21_MERGE_TWO_SORTED_LISTS_MERGE_TWO_LISTS_H
#define INC_21_MERGE_TWO_SORTED_LISTS_MERGE_TWO_LISTS_H

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(const struct ListNode *list1, const struct ListNode *list2);

#endif //INC_21_MERGE_TWO_SORTED_LISTS_MERGE_TWO_LISTS_H
