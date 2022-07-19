//
// Created by baby-benz on 7/19/2022.
//

#ifndef INC_116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_CONNECT_H
#define INC_116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_CONNECT_H

struct Node {
    int val;
    struct Node *left;
    struct Node *right;
    struct Node *next;
};

struct Node *connect(struct Node *root);

#endif //INC_116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_CONNECT_H
