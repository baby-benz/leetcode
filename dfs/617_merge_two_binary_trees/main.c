#include <stdio.h>
#include <malloc.h>
#include "merge_trees.h"

#define TREE_1_SIZE 4
#define TREE_2_SIZE 7

const int root1Vals[TREE_1_SIZE] = {1, 3, 2, 5},
          root2Vals[TREE_2_SIZE] = {2, 1, 3, 9, 4, 8, 7};

struct TreeNode *insertLevelOrder(const int arr[], int i, int n) {
    struct TreeNode *root = NULL;
    if (i < n) {
        root = (struct TreeNode *) malloc(sizeof(struct TreeNode));

        root->val = arr[i];

        root->left = root->right = NULL;

        root->left = insertLevelOrder(arr, 2 * i + 1, n);

        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

void printInOrder(struct TreeNode *node) {
    if (node) {
        if (node->left) {
            printf("%d ", node->left->val);
        }
        if (node->right) {
            printf("%d ", node->right->val);
        }
        printInOrder(node->left);
        printInOrder(node->right);
    }
}

void printTree(struct TreeNode *root) {
    printf("%d ", root->val);
    printInOrder(root);
}

int main() {
    const struct TreeNode *root1 = insertLevelOrder(root1Vals, 0, TREE_1_SIZE);
    const struct TreeNode *root2 = insertLevelOrder(root2Vals, 0, TREE_2_SIZE);

    printTree(mergeTrees(root1, root2));

    return 0;
}
