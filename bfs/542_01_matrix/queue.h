//
// Created by baby-benz on 7/21/2022.
//

#ifndef INC_542_01_MATRIX_QUEUE_H
#define INC_542_01_MATRIX_QUEUE_H

struct QueueNode {
    int left, right;
};

struct Queue {
    int front, rear, size;
    unsigned int capacity;
    struct QueueNode *nodes;
};

struct Queue *create(unsigned int capacity);

void enqueue(struct Queue *queue, struct QueueNode item);

struct QueueNode dequeue(struct Queue *queue);

int isEmpty(struct Queue *queue);

#endif //INC_542_01_MATRIX_QUEUE_H
