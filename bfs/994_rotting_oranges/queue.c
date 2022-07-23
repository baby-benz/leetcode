//
// Created by baby-benz on 7/21/2022.
//

#include <malloc.h>
#include "queue.h"

struct Queue *create(unsigned int capacity) {
    struct Queue *queue = (struct Queue *) malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->size = queue->front = queue->rear = 0;
    queue->nodes = (struct QueueNode *) malloc(queue->capacity * sizeof(struct QueueNode));
    return queue;
}

void enqueue(struct Queue *queue, struct QueueNode item) {
    queue->nodes[queue->rear] = item;
    queue->rear++;
    queue->size++;
}

struct QueueNode dequeue(struct Queue *queue) {
    struct QueueNode item = queue->nodes[queue->front];
    queue->front++;
    queue->size--;
    return item;
}

bool isEmpty(struct Queue *queue) {
    return (queue->size == 0);
}

unsigned int size(struct Queue *queue) {
    return queue->size;
}
