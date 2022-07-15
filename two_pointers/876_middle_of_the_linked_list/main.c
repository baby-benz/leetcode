#include <stdio.h>
#include <malloc.h>
#include "middle_node.h"

#define list_size 6

int main() {
    struct ListNode *head = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *next = (struct ListNode*) malloc(sizeof(struct ListNode));

    head->val = 1;
    head->next = next;

    for (unsigned int i = 1; i < list_size; i++) {
        next->val = i + 1;
        if (i != list_size - 1) {
            next->next = (struct ListNode *) malloc(sizeof(struct ListNode));
            next = next->next;
        }
    }

    next->next = NULL;

    struct ListNode *middle = middleNode(head);

    for (unsigned int i = 0; i < list_size / 2; i++) {
        printf("%d ", middle->val);
        middle = middle->next;
    }
    printf("\n");

    free(head);
    free(next);
    free(middle);

    return 0;
}
