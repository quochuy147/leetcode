// https://leetcode.com/problems/maximum-product-of-three-numbers/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int maximumProduct(int* nums, int size) {
    qsort(nums, size, sizeof(int), compare);
    return nums[0] * nums[1] * nums[size - 1] > nums[size - 3] * nums[size - 2] * nums[size - 1] ? nums[0] * nums[1] * nums[size - 1] : nums[size - 3] * nums[size - 2] * nums[size - 1];
}

void test(int* nums, int size, int wanted) {
    int actual = maximumProduct(nums, size);
    if(wanted != actual) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1, 2, 3}, 3, 6);
    test((int[]) {1, 2, 3, 4}, 4, 24);
    test((int[]) {-1, -2, -3}, 3, -6);
    test((int[]) {3, -9, 4, -10, 5}, 5, 450);
    return 0;
}