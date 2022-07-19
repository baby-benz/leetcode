//
// Created by baby-benz on 7/19/2022.
//

#ifndef INC_617_MERGE_TWO_BINARY_TREES_MERGE_TREES_H
#define INC_617_MERGE_TWO_BINARY_TREES_MERGE_TREES_H

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *mergeTrees(const struct TreeNode *root1, const struct TreeNode *root2);

#endif //INC_617_MERGE_TWO_BINARY_TREES_MERGE_TREES_H
