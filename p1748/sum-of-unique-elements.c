// https://leetcode.com/problems/sum-of-unique-elements/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int sumOfUnique(int* nums, int size) {
    int count[101] = {0}, sum = 0;
    for(int i = 0; i < size; ++i) {
        count[nums[i]]++;
        sum += count[nums[i]] == 1 ? nums[i] : 0;
        sum -= count[nums[i]] == 2 ? nums[i] : 0;
    }
    return sum;
}

void test(int* nums, int size, int wanted) {
    int actual = sumOfUnique(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1, 2, 3, 2}, 4, 4);
    test((int[]) {1, 1, 1, 1, 1}, 5, 0);
    test((int[]) {1, 2, 3, 4, 5}, 5, 15);
    test((int[]) {2, 4, 2, 6, 4, 8, 6}, 7, 8);
    return 0;
}