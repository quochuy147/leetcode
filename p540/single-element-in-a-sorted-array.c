// 

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int singleNonDuplicate(int* nums, int size) {
    if(size == 1) {
        return nums[0];
    }
    for(int i = 0; i < size - 1; ++i) {
        if(nums[i] == nums[i + 1]) {
            i++;
            continue;
        }
        return nums[i];
    }
    return nums[size - 1];
}

void test(int* nums, int size, int wanted) {
    int actual = singleNonDuplicate(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1, 1, 2, 3, 3, 4, 4, 8, 8}, 9, 2);
    test((int[]) {3, 3, 7, 7, 10, 11, 11}, 7, 10);
    test((int[]) {1}, 1, 1);
    test((int[]) {1, 1, 5, 5, 6, 6, 7}, 7, 7);
    return 0;
}