#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include "update_matrix.h"

#define MAT_ROW_SIZE 3
#define MAT_COL_SIZE 3

const unsigned int matData[MAT_ROW_SIZE][MAT_COL_SIZE] = {0, 0, 0, 0, 1, 0, 0, 0, 0};
const unsigned int imageColSize[MAT_ROW_SIZE] = {MAT_COL_SIZE, MAT_COL_SIZE, MAT_COL_SIZE};

int main() {
    unsigned int **mat = (unsigned int **) malloc(sizeof(unsigned int *) * MAT_ROW_SIZE);

    for (int i = 0; i < MAT_ROW_SIZE; i++) {
        size_t colSize = sizeof(unsigned int) * MAT_COL_SIZE;
        mat[i] = (unsigned int *) malloc(colSize);
        memcpy(mat[i], matData[i], colSize);
    }

    unsigned int returnMatSize;
    unsigned int *returnColumnSizes;

    unsigned int **dist = updateMatrix(mat, MAT_ROW_SIZE, imageColSize, &returnMatSize, &returnColumnSizes);

    for (int i = 0; i < returnMatSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", dist[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < MAT_ROW_SIZE; i++) {
        free(mat[i]);
        free(dist[i]);
    }

    free(mat);
    free(dist);
    free(returnColumnSizes);

    return 0;
}
