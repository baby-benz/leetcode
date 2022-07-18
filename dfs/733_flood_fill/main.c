#include <stdio.h>
#include <malloc.h>
#include "flood_fill.h"

#define IMAGE_SIZE 3
#define IMAGE_COL_SIZE 3

const unsigned int imageData[IMAGE_SIZE][IMAGE_COL_SIZE] = {1, 1, 1, 1, 1, 0, 1, 0, 1};

int main() {
    const unsigned int imageColSize[IMAGE_SIZE] = {IMAGE_COL_SIZE, IMAGE_COL_SIZE, IMAGE_COL_SIZE};
    unsigned int **image = (unsigned int **) malloc(sizeof(unsigned int *) * IMAGE_SIZE);
    unsigned int sr = 1, sc = 1, color = 2;

    for (int i = 0; i < IMAGE_SIZE; i++) {
        image[i] = (unsigned int *) malloc(sizeof(unsigned int) * IMAGE_COL_SIZE);
        for (int j = 0; j < IMAGE_COL_SIZE; j++) {
            image[i][j] = imageData[i][j];
        }
    }

    unsigned int returnImageSize = 0;
    unsigned int *returnColumnSizes;

    image = floodFill(image, IMAGE_SIZE, imageColSize, sr, sc, color, &returnImageSize, &returnColumnSizes);

    for (int i = 0; i < returnImageSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d\n", image[i][j]);
        }
    }

    for (int i = 0; i < IMAGE_SIZE; i++) {
        free(image[i]);
    }

    free(image);
    free(returnColumnSizes);

    return 0;
}
