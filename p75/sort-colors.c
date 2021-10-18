// https://leetcode.com/problems/sort-colors/ 

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

void sortColors(int* nums, int size){
    int count[3] = {0};
    for(int i = 0; i < size; ++i) {
        if(nums[i] == 0) {
            count[0]++;
        }
        if(nums[i] == 1) {
            count[1]++;
        }
        if(nums[i] == 2) {
            count[2]++;
        }
    }
    int j = 0;
    for(int i = 0; i < 3; ++i) {
        int color = count[i];
        while(color--) {
            nums[j++] = i;
        }
    }
}

void test(int* nums, int size, int* wanted, int wanted_size) {
    sortColors(nums, size);
    assert_array_equal(wanted, wanted_size, nums, size);
}

int main() {
    test((int[]) {2, 0, 2, 1, 1, 0}, 6, (int[]) {0, 0, 1, 1, 2, 2}, 6);
    test((int[]) {2, 0, 1}, 3, (int[]) {0, 1, 2}, 3);
    test((int[]) {0}, 1, (int[]) {0}, 1);
    test((int[]) {1}, 1, (int[]) {1}, 1);
    test((int[]) {2, 1}, 2, (int[]) {1, 2}, 2);
    return 0;
}