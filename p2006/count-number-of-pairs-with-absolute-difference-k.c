// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int countKDifference(int* nums, int size, int k) {
    int* count = calloc(101, sizeof(int));
    int res = 0;
    for(int i = 0; i < size; ++i) {
        count[nums[i]]++;
    }
    for(int i = 0; i < size; ++i) {
        res += nums[i] + k < 101 ? count[nums[i] + k] : 0;
        res += nums[i] - k > 0 ? count[nums[i] - k] : 0;
        count[nums[i]]--;
    }
    return res;
}

void test(int* nums, int size, int k, int wanted) {
    int actual = countKDifference(nums, size, k);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
} 

int main() {
    test((int[]) {1, 2, 2, 1}, 4, 1, 4);
    test((int[]) {1, 3}, 2, 3, 0);
    test((int[]) {3, 2, 1, 5, 4}, 5, 2, 3);
    test((int[]) {1, 1, 100, 100, 100, 1}, 6, 99, 9); 
    return 0;
}