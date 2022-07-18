//
// Created by baby-benz on 7/18/2022.
//

#include <malloc.h>
#include "flood_fill.h"

void dfsFill(unsigned int **image, const unsigned int imageSize, const unsigned int *imageColSize,
             const unsigned int sr, const unsigned int sc, const unsigned int targetColor, const unsigned int curColor) {
    image[sr][sc] = targetColor;

    if (sr > 0) {
        unsigned int topPixelCoord = sr - 1;
        if (image[topPixelCoord][sc] == curColor) {
            dfsFill(image, imageSize, imageColSize, topPixelCoord, sc, targetColor, curColor);
        }
    }
    if (sr < imageSize - 1) {
        unsigned int bottomPixelCoord = sr + 1;
        if (image[bottomPixelCoord][sc] == curColor) {
            dfsFill(image, imageSize, imageColSize, bottomPixelCoord, sc, targetColor, curColor);
        }
    }
    if (sc > 0) {
        unsigned int leftPixelCoord = sc - 1;
        if (image[sr][leftPixelCoord] == curColor) {
            dfsFill(image, imageSize, imageColSize, sr, leftPixelCoord, targetColor, curColor);
        }
    }
    if (sc < imageColSize[sr] - 1) {
        unsigned int rightPixelCoord = sc + 1;
        if (image[sr][rightPixelCoord] == curColor) {
            dfsFill(image, imageSize, imageColSize, sr, rightPixelCoord, targetColor, curColor);
        }
    }
}

unsigned int **floodFill(unsigned int **image, const unsigned int imageSize, const unsigned int *imageColSize,
                         const unsigned int sr, const unsigned int sc, const unsigned int color,
                         unsigned int *returnSize, unsigned int **returnColumnSizes) {
    *returnSize = imageSize;

    *returnColumnSizes = (unsigned int *) malloc(sizeof(unsigned int) * imageSize);

    for (unsigned int i = 0; i < imageSize; i++) {
        (*returnColumnSizes)[i] = imageColSize[i];
    }

    if (image[sr][sc] == color) {
        return image;
    }

    dfsFill(image, imageSize, imageColSize, sr, sc, color, image[sr][sc]);

    return image;
}
