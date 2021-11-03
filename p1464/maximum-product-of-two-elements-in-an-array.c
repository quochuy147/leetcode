// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int compare(const void* a, const void* b) {
   return (*(int*)b - *(int*)a);
}

int maxProduct(int* nums, int size){
    qsort(nums, size, sizeof(int), compare);
    return (nums[0] - 1) * (nums[1] - 1);    
}

void test(int* nums, int size, int wanted) {
    int actual = maxProduct(nums, size);
    if(wanted != actual) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {3, 4, 5, 2}, 4, 12);
    test((int[]) {1, 5, 4, 5}, 4, 16);
    test((int[]) {3, 7}, 2, 12);
    return 0;
}