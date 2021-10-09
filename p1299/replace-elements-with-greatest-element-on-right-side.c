// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* replaceElements(int* arr, int size, int* returnSize) {
    *returnSize = size;
    int* max = calloc(size, sizeof(int));
    max[size - 1] = -1;
    for(int i = size - 2; i >= 0; --i) {
        max[i] = max[i + 1] > arr[i + 1] ? max[i + 1] : arr[i + 1];
    }
    return max;
}

void test(int* arr, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = replaceElements(arr, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {17, 18, 5, 4, 6, 1}, 6, (int[]) {18, 6, 6, 6, 1, -1}, 6);
    test((int[]) {400}, 1, (int[]) {-1}, 1);
    test((int[]) {5, 4, 3, 2, 1}, 5, (int[]) {4, 3, 2, 1, -1}, 5);
    test((int[]) {1, 2, 3, 4, 5}, 5, (int[]) {5, 5, 5, 5, -1}, 5);
    return 0;
}