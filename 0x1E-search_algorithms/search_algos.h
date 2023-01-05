#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
size_t min(size_t a, size_t b);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);

#endif
