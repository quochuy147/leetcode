// https://leetcode.com/problems/running-sum-of-1d-array/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* runningSum(int* nums, int size, int* returnSize){
    *returnSize = size;
    for(int i = 1; i < size; ++i) {
        nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = runningSum(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {1, 2, 3, 4}, 4, (int[]) {1, 3, 6, 10}, 4);
    test((int[]) {1, 1, 1, 1, 1}, 5, (int[]) {1, 2, 3, 4, 5}, 5);
    test((int[]) {3, 1, 2, 10, 1}, 5, (int[]) {3, 4, 6, 16, 17}, 5);
    test((int[]) {1000000, -1000000, -1000000, 1000000}, 4, (int[]) {1000000, 0, -1000000, 0}, 4);
    return 0;
}