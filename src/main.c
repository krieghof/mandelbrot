#include <stdio.h>
#include "mandelbrot.h"

int main() {

    int width = 10;
    int height = 10;
    int max_iteration = 10;
    unsigned mandelbrot_set[width][height];

    mandelbrot(width,height,max_iteration,mandelbrot_set);

    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            printf("%d ",mandelbrot_set[i][j]);
        }
        printf("\n");
    }

}