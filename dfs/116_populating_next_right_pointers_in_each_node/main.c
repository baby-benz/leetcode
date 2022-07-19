#include <stdio.h>
#include <malloc.h>
#include "connect.h"

#define TREE_SIZE 7

const int rootVals[TREE_SIZE] = {1, 2, 3, 4, 5, 6, 7};

struct Node *insertLevelOrder(const int arr[], int i, int n) {
    struct Node *root = NULL;
    if (i < n) {
        root = (struct Node *) malloc(sizeof(struct Node));

        root->val = arr[i];

        root->left = root->right = root->next = NULL;

        root->left = insertLevelOrder(arr, 2 * i + 1, n);

        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

void printInOrder(struct Node *node) {
    if (node) {
        if (node->left) {
            printf("%d ", node->left->val);
            if (!node->left->next) {
                printf("# ");
            }
        }
        if (node->right) {
            printf("%d ", node->right->val);
            if (!node->right->next) {
                printf("# ");
            }
        }
        printInOrder(node->left);
        printInOrder(node->right);
    }
}

void printTree(struct Node *root) {
    printf("%d ", root->val);
    if (root->next) {
        printf("# ");
    }
    printInOrder(root);
}

int main() {
    struct Node *root = insertLevelOrder(rootVals, 0, TREE_SIZE);

    printTree(connect(root));

    return 0;
}
