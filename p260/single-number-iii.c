// https://leetcode.com/problems/single-number-iii/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* singleNumber(int* nums, int size, int* returnSize) {
    *returnSize = 0;
    qsort(nums, size, sizeof(int), compare);
    for(int i = 0; i < size - 1; ++i) {
        if(nums[i] == nums[i + 1]) {
            i++;
            continue;
        }
        nums[(*returnSize)++] = nums[i];
        if((*returnSize) == 2) {
            return nums;
        }
    }
    if((*returnSize) == 1) {
        nums[(*returnSize)++] = nums[size - 1];
    }
    return nums;
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = singleNumber(nums, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {1, 2, 1, 3, 2, 5}, 6, (int[]) {3, 5}, 2);
    test((int[]) {-1, 0}, 2, (int[]) {-1, 0}, 2);
    test((int[]) {1, 1, 2, 3, 3, 4, 5, 5}, 8, (int[]) {2, 4}, 2);
    test((int[]) {-2147483648, -1, 0, 0, -1, 2147483647}, 6, (int[]) {-2147483648, 2147483647}, 2);
    return 0;
}