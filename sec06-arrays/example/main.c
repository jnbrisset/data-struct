#include "main.h"

int main(int argc, char *argv[]) {
    // Opaque pointer for an array

    // Create an array of integers
    array_t *array = array_create(array);

    // Push the prime numbers to the array
    array = array_push(array, 1);
    array = array_push(array, 2);
    array = array_push(array, 3);
    array = array_push(array, 5);
    array = array_push(array, 7);
    array = array_push(array, 11);
    array = array_push(array, 13);
    array = array_push(array, 17);

    printf("Length of array: %d\n", array->length);
    array_print(array);

    // Pop 2 values from the array.
    printf("Popped value: %d\n", array_pop(array));
    printf("Popped value: %d\n", array_pop(array)); 

    printf("Length of array: %d\n", array->length);
    array_print(array);

    // Insert the next two prime numbers in the middle of the array
    array = array_insert(array, 2, 19);
    array = array_insert(array, 3, 23);

    printf("Length of array: %d\n", array->length);
    array_print(array);

    // Delete the first 3 values from the array
    array_delete(array, 2);
    array_delete(array, 1);
    array_delete(array, 0);

    printf("Length of array: %d\n", array->length);
    array_print(array);

    // Free the memory allocated for the array
    free_array(array);

    return EXIT_SUCCESS;
}