// https://leetcode.com/problems/two-sum/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* twoSum(int* nums, int size, int target, int* returnSize) {
    *returnSize = 2;
    int* res = malloc(2 * sizeof(int));
    for(int i = 0; i < size; ++i) {
        for(int j = i  + 1; j < size; ++j) {
            if(nums[i] + nums[j] == target) {
                res[0] = i;
                res[1] = j;
                break;
            }
        }
    }
    return res;
}

void test(int* nums, int size, int target, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = twoSum(nums, size, target, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {2, 7, 11, 15}, 4, 9, (int[]) {0, 1}, 2);
    test((int[]) {3, 2, 4}, 3, 6, (int[]) {1, 2}, 2);
    test((int[]) {3, 3}, 2, 6, (int[]) {0, 1}, 2);
    test((int[]) {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 19, (int[]) {8, 9}, 2);
    return 0;
}