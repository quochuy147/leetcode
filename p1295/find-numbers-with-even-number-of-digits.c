// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int findNumbers(int* nums, int size) {
    int count = 0, digit;
    for(int i = 0; i < size; ++i) {
        digit = 0;
        while(nums[i] > 0) {
            nums[i] /= 10;
            digit++;
        }
        count = digit % 2 == 0 ? count + 1 : count;
    }
    return count;
}

void test(int* nums, int size, int wanted) {
    int actual = findNumbers(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1}, 1, 0);
    test((int[]) {12, 345, 2, 6, 7896}, 5, 2);
    test((int[]) {555, 901, 482, 1771}, 4, 1);
    test((int[]) {1, 11, 111, 1111, 11111}, 5, 2);
    return 0;
}