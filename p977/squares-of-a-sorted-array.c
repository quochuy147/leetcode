// https://leetcode.com/problems/squares-of-a-sorted-array/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

int* sortedSquares(int* nums, int size, int* returnSize) {
    *returnSize = size;
    int* res = calloc(size, sizeof(int));
    for(int i = 0; i < size; ++i) {
        res[i] = nums[i] * nums[i];
    }
    qsort(res, size, sizeof(int), compare);
    return res;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = sortedSquares(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {0}, 1, (int[]) {0}, 1);
    test((int[]) {1, 2, 3}, 3, (int[]) {1, 4, 9}, 3);
    test((int[]) {-4, -1, 0, 3, 10}, 5, (int[]) {0, 1, 9, 16, 100}, 5);
    test((int[]) {-7, -3, 2, 3, 11}, 5, (int[]) {4, 9, 9, 49, 121}, 5);
    return 0;
}