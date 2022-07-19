//
// Created by baby-benz on 7/19/2022.
//

#include <malloc.h>
#include "merge_trees.h"

struct TreeNode *mergeTrees(const struct TreeNode *root1, const struct TreeNode *root2) {
    struct TreeNode *result = (struct TreeNode *) malloc(sizeof(struct TreeNode));

    if (!root1 && !root2) {
        result = NULL;
    } else if (!root1) {
        *result = *root2;
    } else if (!root2) {
        *result = *root1;
    } else {
        result->val = root1->val + root2->val;
        result->left = mergeTrees(root1->left, root2->left);
        result->right = mergeTrees(root1->right, root2->right);
    }

    return result;
}
