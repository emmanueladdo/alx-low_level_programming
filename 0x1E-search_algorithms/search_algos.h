#ifndef search_algo
#define search_algo
#include <stdio.h>
#include <math.h>

void print_array(int *array, size_t inc, size_t size);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
