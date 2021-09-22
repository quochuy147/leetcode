// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"


int* findDisappearedNumbers(int* nums, int size, int* returnSize) {
    int* count = calloc(size + 1, sizeof(int));
    int end = 0;
    *returnSize = 0;
    for(int i = 0; i < size; ++i) {
        count[nums[i]] = 1;
    }
    for(int i = 1; i <= size; ++i) {
        if(count[i] == 0) {
            nums[(*returnSize)++] = i;
        }
    }
    return nums;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = findDisappearedNumbers(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {4, 3, 2, 7, 8, 2, 3, 1}, 8, (int[]) {5, 6}, 2);
    test((int[]) {1, 1}, 2, (int[]) {2}, 1);
    test((int[]) {1, 2, 3}, 3, (int[]) {}, 0);
    test((int[]) {1, 1, 1, 2, 2, 2, 5, 5, 5}, 9, (int[]) {3, 4, 6, 7, 8, 9}, 6);
    return 0;
}