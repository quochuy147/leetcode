// https://leetcode.com/problems/longest-increasing-subsequence/
// Dynamic programming

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int lengthOfLIS(int* nums, int size){
    int dp[size + 1];
    dp[size] = 1;
    for(int i = size - 1; i >= 0; --i) {
        int max = size;
        for(int j = i + 1; j < size; ++j) {
            if(nums[j] > nums[i] && dp[j] > dp[max]) {
                max = j;
            }
        }
        dp[i] = dp[max] + 1;
    }
    int max = 0;
    for(int i = 0 ; i < size; ++i) {
        if(max < dp[i]) {
            max = dp[i];
        }
    }
    return max - 1;
}

void test(int* nums, int size, int wanted) {
    int actual = lengthOfLIS(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {10, 9, 2, 5, 3, 7, 101, 18}, 8, 4);
    test((int[]) {0, 1, 0, 3, 2, 3}, 6, 4);
    test((int[]) {7, 7, 7, 7, 7, 7, 7}, 7, 1);
    test((int[]) {1, 2, 3, 4, 5}, 5, 5);
    test((int[]) {5, 4, 3, 2, 1}, 5, 1);
    return 0;
}