// https://leetcode.com/problems/smallest-index-with-equal-value/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int smallestEqual(int* nums, int size){
    for(int i = 0; i < size; ++i) {
        if(nums[i] == i % 10) {
            return i;
        }
    }
    return -1;
}

void test(int* nums, int size, int wanted) {
    int actual = smallestEqual(nums, size);
    if(wanted != actual) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {0, 1, 2}, 3, 0);
    test((int[]) {4, 3, 2, 1}, 4, 2);
    test((int[]) {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, 10, -1);
    test((int[]) {2, 1, 3, 5, 2}, 5, 1);
    return 0;
}