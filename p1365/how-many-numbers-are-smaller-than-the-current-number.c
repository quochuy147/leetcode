// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* smallerNumbersThanCurrent(int* nums, int size, int* returnSize) {
    *returnSize = size;
    int count[101] = {0};
    for(int i = 0; i < size; ++i) {
        count[nums[i]]++;
    }
    int pre = count[0];
    count[0] = 0;
    for(int i = 1; i <= 100; ++i) {
        int tmp = pre;
        pre = count[i];
        count[i] = count[i - 1] + tmp;
    }
    for(int i = 0; i < size; ++i) {
        nums[i] = count[nums[i]];
    }
    return nums;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = smallerNumbersThanCurrent(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {8, 1, 2, 2, 3}, 5, (int[]) {4, 0, 1, 1, 3}, 5);
    test((int[]) {6, 5, 4, 8}, 4, (int[]) {2, 1, 0, 3}, 4);
    test((int[]) {7, 7, 7, 7}, 4, (int[]) {0, 0, 0, 0}, 4);
    test((int[]) {1, 2, 3, 1, 2, 3}, 6, (int[]) {0, 2, 4, 0, 2, 4}, 6);
    return 0;
}