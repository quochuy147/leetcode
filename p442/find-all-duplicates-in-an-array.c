// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* findDuplicates(int* nums, int size, int* returnSize) {
    *returnSize = 0;
    int* count = calloc(size + 1, sizeof(int));
    for(int i = 0; i < size; ++i) {
        count[nums[i]]++;
        if(count[nums[i]] == 2) {
            nums[(*returnSize)++] = nums[i];
        }
    }
    return nums;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = findDuplicates(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {4, 3, 2, 7, 8, 2, 3, 1}, 8, (int[]) {2, 3}, 2);
    test((int[]) {1, 1, 2}, 3, (int[]) {1}, 1);
    test((int[]) {1}, 1, (int[]) {}, 0);
    test((int[]) {1, 2, 3, 4, 5, 4, 3, 2, 1}, 9, (int[]) {4, 3, 2, 1}, 4);
    return 0;
}