// https://leetcode.com/problems/concatenation-of-array/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* getConcatenation(int* nums, int size, int* returnSize) {
    *returnSize = size * 2;
    int* ans = (int*)malloc(size * 2 * sizeof(int));
    for(int i = 0; i < size; ++i) {
        ans[i] = ans[i + size] = nums[i];
    }
    return ans;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = getConcatenation(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {1, 2, 1}, 3, (int[]) {1, 2, 1, 1, 2, 1}, 6);
    test((int[]) {1, 3, 2, 1}, 4, (int[]) {1, 3, 2, 1, 1, 3, 2, 1}, 8);
    test((int[]) {1}, 1, (int[]) {1, 1}, 2);
    test((int[]) {1, 2, 3, 4, 5}, 5, (int[]) {1, 2, 3, 4, 5, 1, 2, 3, 4, 5}, 10);
    return 0;
}