#include <stdio.h>
#include <malloc.h>
#include "max_area_of_island.h"

#define IMAGE_SIZE 8
#define IMAGE_COL_SIZE 13

const unsigned int gridData[IMAGE_SIZE][IMAGE_COL_SIZE] = {0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
                                                           0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
                                                           0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
                                                           0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0,
                                                           0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0,
                                                           0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                                                           0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
                                                           0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0};

int main() {
    unsigned int **const grid = (unsigned int **) malloc(sizeof(unsigned int *) * IMAGE_SIZE);

    for (int i = 0; i < IMAGE_SIZE; i++) {
        grid[i] = (unsigned int *) malloc(sizeof(unsigned int) * IMAGE_COL_SIZE);
        for (int j = 0; j < IMAGE_COL_SIZE; j++) {
            grid[i][j] = gridData[i][j];
        }
    }

    const unsigned int gridColSize = IMAGE_COL_SIZE;

    unsigned int maxIslandArea = maxAreaOfIsland((const unsigned int **) grid, IMAGE_SIZE, &gridColSize);

    printf("%d\n", maxIslandArea);

    for (int i = 0; i < IMAGE_SIZE; i++) {
        free(grid[i]);
    }

    free(grid);

    return 0;
}
