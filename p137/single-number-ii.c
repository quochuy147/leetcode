// https://leetcode.com/problems/single-number-ii/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int compare(const void* a, const void* b) {
    return (*(int*)a < *(int*)b);
}

int singleNumber(int* nums, int size) {
    qsort(nums, size, sizeof(int), compare);
    for(int i = 0; i < size - 2; ++i) {
        if(nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2]) {
            i += 2;
        } else {
            return nums[i];
        }
    }
    return nums[size - 1];
}

void test(int* nums, int size, int wanted) {
    int actual = singleNumber(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {2, 2, 3, 2}, 4, 3);
    test((int[]) {0, 1, 0, 1, 0, 1, 99}, 7, 99);
    test((int[]) {0}, 1, 0);
    test((int[]) {2147483647, -2147483648, 2147483647, 2147483647}, 4, -2147483648);
    return 0;
}