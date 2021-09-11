// https://leetcode.com/problems/duplicate-zeros/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

void duplicateZeros(int* arr, int size) { 
    int* nums = calloc(size * 2, sizeof(int));
    int count = 0;
    for(int i = 0; i < size; ++i) {
        nums[count++] = arr[i];
        if(arr[i] == 0) {
            nums[count++] = arr[i];
        }
    }
    for(int i = 0; i < size; ++i) {
        arr[i] = nums[i];
    }
}

void test(int* arr, int size, int* wanted, int wanted_size) {
    duplicateZeros(arr, size);
    int* actual = malloc(size * sizeof(int));
    copy_array(arr, size, actual);
    int actual_size = size;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {0, 1}, 2, (int[]) {0, 0}, 2);
    test((int[]) {1, 0, 2, 3, 0, 4, 5, 0}, 8, (int[]) {1, 0, 0, 2, 3, 0, 0, 4}, 8);
    test((int[]) {1, 2, 3}, 3, (int[]) {1, 2, 3}, 3);
    test((int[]) {0, 1, 0, 2, 0, 3, 0, 4, 0, 5}, 10, (int[]) {0, 0, 1, 0, 0, 2, 0, 0, 3, 0}, 10);
    return 0;
}