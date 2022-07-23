//
// Created by baby-benz on 7/20/2022.
//

#include <malloc.h>
#include "queue.h"
#include "update_matrix.h"

unsigned int **updateMatrix(const unsigned int **mat, const unsigned int matSize, const unsigned int *matColSize,
                            unsigned int *returnSize, unsigned int **returnColumnSizes) {
    *returnSize = matSize;

    *returnColumnSizes = (unsigned int *) malloc(sizeof(unsigned int) * matSize);

    for (unsigned int i = 0; i < matSize; i++) {
        (*returnColumnSizes)[i] = matColSize[i];
    }

    unsigned int **dist = (unsigned int **) malloc(sizeof(unsigned int *) * matSize);

    struct Queue *q = create(matSize * matColSize[0]);

    for (int i = 0; i < matSize; ++i) {
        dist[i] = (unsigned int *) malloc(sizeof(unsigned int) * matColSize[i]);
        for (int j = 0; j < matColSize[i]; j++) {
            if (mat[i][j] == 0) {
                dist[i][j] = 0;
                struct QueueNode item = {.left = i, .right = j};
                enqueue(q, item);
            } else {
                dist[i][j] = INT_MAX;
            }
        }
    }

    int dir[4][2] = {{-1, 0},
                     {1,  0},
                     {0,  -1},
                     {0,  1}};

    while (!isEmpty(q)) {
        struct QueueNode cur = dequeue(q);
        for (int i = 0; i < 4; i++) {
            int newRow = cur.left + dir[i][0], newCol = cur.right + dir[i][1];
            if (newRow >= 0 && newCol >= 0 && newRow < matSize && newCol < matColSize[0]) {
                if (dist[newRow][newCol] > dist[cur.left][cur.right] + 1) {
                    dist[newRow][newCol] = dist[cur.left][cur.right] + 1;
                    struct QueueNode item = {.left = newRow, .right = newCol};
                    enqueue(q, item);
                }
            }
        }
    }

    return dist;
}
