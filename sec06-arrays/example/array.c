#include "array.h"

// Function: array_create
// Description: Allocates memory for an array of integers.
// Returns: Pointer to the array.
void *array_create(array_t *array){
    // Allocate memory for an array of integers
    array = malloc(sizeof(array_t)); 
    // Check if memory allocation was successful

    if (array == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return NULL;
    }
}

void *array_push(array_t *array, int item){
    // Allocate memory for an array of integers
    if (array == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return NULL;
    }

    if (array->data == NULL) {
        array->data = malloc(sizeof(int));
    } else{
        array->data = realloc(array->data, sizeof(int) * (array->length + 1));
    }
    array->data[array->length] = item;
    array->length++;
    return array;
}

// Function: array_print
// Description: Prints the values of the array.
void array_print(array_t *array) {
    printf("Array: [");
    for (int i = 0; i < array->length; i++) {
        printf("%d", array->data[i]);
        if (i < array->length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int array_pop(array_t *array){
    if (array == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return -1;
    }
    if (array->length == 0) {
        printf("Error: Array is empty.\n");
        return -1;
    }
    int item = array->data[array->length - 1];
    array->data = realloc(array->data, sizeof(int) * (array->length - 1));
    array->length--;
    return item;
}

void *array_insert(array_t *array, int index, int value) {
    if (array == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return NULL;
    }
    if (index < 0 || index > array->length) {
        printf("Error: Index out of bounds.\n");
        return NULL;
    }
    array->data = realloc(array->data, sizeof(int) * (array->length + 1));
    for (int i = array->length; i > index; i--) {
        array->data[i] = array->data[i - 1];
    }
    array->data[index] = value;
    array->length++;
    return array;
}

int array_delete(array_t *array, int index) {
    if (array == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return -1;
    }
    if (index < 0 || index > array->length) {
        printf("Error: Index out of bounds.\n");
        return -1;
    }
    int item = array->data[index];
    for (int i = index; i < array->length - 1; i++) {
        array->data[i] = array->data[i + 1];
    }
    array->data = realloc(array->data, sizeof(int) * (array->length - 1));
    array->length--;

    return item;
}

bool free_array(array_t *array){
    if (array == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return false;
    }
    free(array->data);
    free(array);
    return true;
}
