#include "mandelbrot.h"

int mandelbrot(int width, int height, int max_iteration, unsigned mandelbrot[width][height]) {
    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {

            double relative_x = (double) x / width;
            double relative_y = (double) y / width;

            double real_c = relative_x * 3 - 3;
            double imaginary_c = relative_y * 2 - 2;

            double real = 0.0;
            double imaginary = 0.0;

            unsigned iteration = 0;
            while (iteration <= max_iteration && real * real + imaginary + imaginary <= 2 * 2) {
                // Complex * complex + C
                double previous_real = real;
                real = (real * real - imaginary * imaginary) + real_c;
                imaginary = (previous_real * imaginary + previous_real * imaginary)+ imaginary_c;
                iteration++;
            }
            mandelbrot[x][y] = iteration;
        }
    }
    return 0;
}