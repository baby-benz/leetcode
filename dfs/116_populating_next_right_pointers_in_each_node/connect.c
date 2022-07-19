//
// Created by baby-benz on 7/19/2022.
//

#include "connect.h"

void populateRightPointers(struct Node *root) {
    if (!root || !root->left) {
        return;
    }

    root->left->next = root->right;
    root->right->next = root->next ? root->next->left : root->next;
    populateRightPointers(root->left);
    populateRightPointers(root->right);
}

struct Node *connect(struct Node *root) {
    populateRightPointers(root);

    return root;
}
