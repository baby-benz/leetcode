//
// Created by baby-benz on 7/18/2022.
//

#include <stdbool.h>
#include <memory.h>
#include "max_area_of_island.h"

#define MAX(A,B) (((A) > (B)) ? (A) : (B))

unsigned int dfsFindArea(const unsigned int **grid, const unsigned int gridSize, const unsigned int gridColSize,
                const unsigned int sr, const unsigned int sc, bool visited[gridSize][gridColSize]) {
    if (sr < 0 || sc < 0 || sr >= gridSize || sc >= gridColSize || visited[sr][sc] || !grid[sr][sc]) {
        return 0;
    }

    visited[sr][sc] = true;

    return 1 + dfsFindArea(grid, gridSize, gridColSize, sr - 1, sc, visited) +
           dfsFindArea(grid, gridSize, gridColSize, sr + 1, sc, visited) +
           dfsFindArea(grid, gridSize, gridColSize, sr, sc - 1, visited) +
           dfsFindArea(grid, gridSize, gridColSize, sr, sc + 1, visited);
}

unsigned int maxAreaOfIsland(const unsigned int **grid, const unsigned int gridSize, const unsigned int *gridColSize) {
    bool visited[gridSize][*gridColSize];

    memset(visited, false, sizeof(bool) * gridSize * *gridColSize);

    unsigned int maxIslandArea = 0;
    unsigned int curIslandArea;

    for (unsigned int i = 0; i < gridSize; i++) {
        for (unsigned int j = 0; j < *gridColSize; j++) {
            curIslandArea = dfsFindArea(grid, gridSize, *gridColSize, i, j, visited);
            maxIslandArea = MAX(curIslandArea, maxIslandArea);
        }
    }

    return maxIslandArea;
}
