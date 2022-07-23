//
// Created by baby-benz on 7/23/2022.
//

#include <malloc.h>
#include <memory.h>
#include "oranges_rotting.h"
#include "queue.h"

int orangesRotting(const unsigned int **grid, unsigned int gridSize, const unsigned int *gridColSize) {
    struct Queue *q = create(gridSize * gridColSize[0]);

    unsigned int **workGrid = (unsigned int **) malloc(sizeof(unsigned int *) * gridSize);
    for (int i = 0; i < gridSize; i++) {
        size_t rowSize = sizeof(unsigned int) * gridColSize[i];
        workGrid[i] = (unsigned int *) malloc(rowSize);
        memcpy(workGrid[i], grid[i], rowSize);
    }

    int fresh = 0;

    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (workGrid[i][j] == 2) {
                struct QueueNode item = {.left = i, .right = j};
                enqueue(q, item);
            } else if (workGrid[i][j] == 1) {
                fresh++;
            }
        }
    }

    if (isEmpty(q) && fresh > 0) {
        return -1;
    } else if (fresh == 0) {
        return 0;
    }

    int dir[4][2] = {{-1, 0},
                     {1,  0},
                     {0,  -1},
                     {0,  1}};

    int minutesToRot = -1;

    while (!isEmpty(q)) {
        unsigned int qSize = size(q);
        while(qSize--) {
            struct QueueNode cur = dequeue(q);
            for (int i = 0; i < 4; i++) {
                int newRow = cur.left + dir[i][0], newCol = cur.right + dir[i][1];
                if (newRow >= 0 && newCol >= 0 && newRow < gridSize && newCol < gridColSize[0]) {
                    if (workGrid[newRow][newCol] == 1) {
                        workGrid[newRow][newCol] = 2;
                        struct QueueNode item = {.left = newRow, .right = newCol};
                        enqueue(q, item);
                        fresh--;
                    }
                }
            }
        }
        minutesToRot++;
    }

    if (fresh) {
        return -1;
    }

    return minutesToRot;
}
