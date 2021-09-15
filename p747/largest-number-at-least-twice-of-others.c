// https://leetcode.com/problems/largest-number-at-least-twice-of-others/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int dominantIndex(int* nums, int size) {
    int max = 0, index = 0;
    for(int i = 0; i < size; ++i) {
        if(max < nums[i]) {
            max = nums[i];
            index = i;
        }
    }
    for(int i = 0; i < size; ++i) {
        if(nums[i] * 2 > max && i != index) {
            return -1;
        }
    }
    return index;
}

void test(int* nums, int size, int wanted) {
    int actual = dominantIndex(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d", size, wanted, actual);
    }
} 

int main() {
    test((int[]) {3, 6, 1, 0}, 4, 1);
    test((int[]) {1, 2, 3, 4}, 4, -1);
    test((int[]) {2, 4, 6, 8, 16}, 5, 4);
    test((int[]) {1, 3, 5, 7, 9, 11}, 6, -1);
    return 0;
}