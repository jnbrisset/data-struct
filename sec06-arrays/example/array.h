#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <stdbool.h>

#define DEFAULT_ARRAY_LENGTH 1

#define INIT_ARRAY

typedef struct array_t {
    int length;
    int *data;
} array_t;


void *array_create(array_t *array);

void *array_push(array_t *array, int item);

int array_pop(array_t *array);

int array_lookup(array_t *array, int index);

void *array_insert(array_t *array, int index, int value);

int array_delete(array_t *array, int index);

void array_print(array_t *array);

bool free_array(array_t *array);