// https://leetcode.com/problems/max-consecutive-ones/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int findMaxConsecutiveOnes(int* nums, int size) {
    int max = 0, count = 0;
    for(int i = 0; i < size - 1; ++i) {
        nums[i] == 1 && nums[i + 1] == 1 ? count++ : count;
        if(nums[i] == 1 && nums[i + 1] == 0) {
            max = max < count + 1 ? count + 1 : max;
            count = 0;
        }
    }
    nums[size - 1] == 1 && max == 0 ? max = 1 : 0;
    return max < count + 1 && count != 0 ? count + 1 : max;
}

void test(int* nums, int size, int wanted) {
    int actual = findMaxConsecutiveOnes(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1, 1, 0, 1, 1, 1}, 6, 3);
    test((int[]) {1, 0, 1, 1, 0, 1}, 6, 2);
    test((int[]) {0}, 1, 0);
    test((int[]) {1}, 1, 1);
    test((int[]) {0, 0, 0, 0, 1}, 5, 1);
    test((int[]) {1, 1, 1, 1, 1, 1, 1}, 7, 7);
    return 0;
}