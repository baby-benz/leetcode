//
// Created by baby-benz on 7/19/2022.
//

#include "connect.h"

struct Node *connect(struct Node *root) {
    for (struct Node *start = root; start && start->left; start = start->left) {
        for (struct Node *node = start; node; node = node->next) {
            node->left->next = node->right;
            node->right->next = node->next ? node->next->left : node->next;
        }
    }
    return root;
}
