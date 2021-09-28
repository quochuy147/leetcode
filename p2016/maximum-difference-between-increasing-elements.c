// https://leetcode.com/problems/maximum-difference-between-increasing-elements/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "../lib/array.h"

int maximumDifference(int* nums, int size){
    int min = nums[0], max = 0;
    for(int i = 1; i < size; ++i) {
        min = nums[i] < min ? nums[i] : min;
        max = max < nums[i] - min ? nums[i] - min : max;
    }
    return max ? max : -1;
}

void test(int* nums, int size, int wanted) {
    int actual = maximumDifference(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n");
    }
}

int main() {
    test((int[]) {0, 0}, 2, -1);
    test((int[]) {7, 1, 5, 4}, 4, 4);
    test((int[]) {9, 4, 3, 2}, 4, -1);
    test((int[]) {1, 5, 2, 10}, 4, 9);
    return 0;
}