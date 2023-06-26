/*
    DAA - Dynamic Alocating  Array
    By GRATHRRAM 
    Licence GNU GPL 3
    Version DEV_TEST (no release dev test only!)
*/

#ifndef STDLIB_H
#include <stdlib.h>
#endif
#ifndef STDINT_H
#include <stdint.h>
#endif

#define tchar sizeof(char)
#define tint sizeof(int)
#define tlong sizeof(long)
#define tfloat sizeof(float)
#define tdouble sizeof(double)

int arr_alloc(void *array, uint64_t type, uint64_t size);
int arr_realloc(void *array, uint64_t type, uint64_t size);
void arr_add_last(void *array, uint64_t type, void *data);
void arr_add_first(void *array, uint64_t type, void *data);
uint64_t arr_size(void *array);



int arr_alloc(void *array, uint64_t type, uint64_t size)
{
    array = malloc(type * size);
    if(!array) return 1;
    return 0;
}

int arr_realloc(void *array, uint64_t type, uint64_t size)
{
    array = realloc(array, type * size);
    if(!array) return 1;
    return 0;
}

uint64_t arr_size(void *array)
{
    return (uint64_t) sizeof(array) / sizeof(array[0]);
}

void arr_add_last(void *array, uint64_t type, void *data)
{
    uint64_t size = arr_size(array);
    array = realloc(array, (type * size) + type);
    array[size + 1] = data;
}

void arr_add_first(void *array, uint64_t type, void *data)
{
    uint64_t size = arr_size(array);
    void arr = malloc((type * size) + type);
    array = realloc(array,(type * size) + type);

    arr[0] = data;

    for(uint64_t cout = 1; cout < size += 1; cout++) {
        arr[cout] = array[cout - 1];
    } 

    array = arr;
    free(arr);
}