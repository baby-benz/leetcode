#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include "oranges_rotting.h"

#define GRID_ROW_SIZE 3
#define GRID_COL_SIZE 3

const unsigned int gridData[GRID_ROW_SIZE][GRID_COL_SIZE] = {2, 1, 1, 1, 1, 0, 0, 1, 1};
const unsigned int gridColSize[GRID_ROW_SIZE] = {GRID_COL_SIZE, GRID_COL_SIZE, GRID_COL_SIZE};

int main() {
    unsigned int **grid = (unsigned int **) malloc(sizeof(unsigned int *) * GRID_ROW_SIZE);

    for (int i = 0; i < GRID_ROW_SIZE; i++) {
        size_t colSize = sizeof(unsigned int) * GRID_COL_SIZE;
        grid[i] = (unsigned int *) malloc(colSize);
        memcpy(grid[i], gridData[i], colSize);
    }

    printf("%d\n", orangesRotting(grid, GRID_ROW_SIZE, gridColSize));

    for (int i = 0; i < GRID_ROW_SIZE; i++) {
        free(grid[i]);
    }

    free(grid);

    return 0;
}
