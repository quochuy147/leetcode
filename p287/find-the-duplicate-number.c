// https://leetcode.com/problems/find-the-duplicate-number/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int findDuplicate(int* nums, int size){
    int* count = calloc(size, sizeof(int));
    for(int i = 0; i < size; ++i) {
        count[nums[i]]++;
        if(count[nums[i]] == 2) {
            return nums[i];
        }
    }
    return 0;
}

void test(int* nums, int size, int wanted) {
    int actual = findDuplicate(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1, 3, 4, 2, 2}, 5, 2);
    test((int[]) {3, 1, 3, 4, 2}, 5, 3);
    test((int[]) {1, 1}, 2, 1);
    test((int[]) {1, 1, 2}, 3, 1);
    return 0;
}