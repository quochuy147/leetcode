#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void copy_array(int* old_array, int size, int* new_array) {
    for(int i = 0; i < size; ++i) {
        new_array[i] = old_array[i];
    }
}

bool assert_array_equal(int* wanted, int wanted_size, int* actual, int actual_size) {
    if(wanted_size != actual_size) {
        printf("2 arrays have different size\n");
        printf("ERR: wanted_size = %d but actual_size = %d\n", wanted_size, actual_size);
        printf("ERR: wanted : ");
        print_array(wanted, wanted_size);
        printf("ERR: actual : ");
        print_array(actual, actual_size);
        return false;
    }
    int size = wanted_size;
    for(int i = 0; i < size; ++i) {
        if(wanted[i] != actual[i]) {
            printf("ERR: wanted[%d] = %d but actual[%d] = %d\n", i, wanted[i], i, actual[i]);
            printf("ERR: wanted : ");
            print_array(wanted, wanted_size);
            printf("ERR: actual : ");
            print_array(actual, actual_size);
            return false;
        }
    }
    return true;
}