// https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../lib/array.h"


int* intersect(int* nums1, int nums1_size, int* nums2, int nums2_size, int* returnSize) {
    int count[1001] = {0}, end = 0;
    for(int i = 0; i < nums1_size; ++i) {
        count[nums1[i]]++;
    }
    for(int i = 0; i < nums2_size; ++i) {
        count[nums2[i]] != 0 ? nums1[end++] = nums2[i] : 0;
        count[nums2[i]] != 0 ? count[nums2[i]]-- : 0;  
    }
    *returnSize = end;
    return nums1;
}

void test(int* nums1, int nums1_size, int* nums2, int nums2_size, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = intersect(nums1, nums1_size, nums2, nums2_size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {0}, 1, (int[]) {0}, 1, (int[]) {0}, 1);
    test((int[]) {1, 2, 2, 1}, 4, (int[]) {2, 2}, 2, (int[]) {2, 2}, 2);
    test((int[]) {4, 9, 5}, 3, (int[]) {9, 4, 9, 8, 4}, 5, (int[]) {9, 4}, 2);
    test((int[]) {1, 1, 1, 2, 2, 2}, 6, (int[]) {2, 2, 1, 1}, 4, (int[]) {2, 2, 1, 1}, 4);
    test((int[]) {1000, 1000, 100, 10, 1, 0}, 6, (int[]) {1, 50, 100, 1000}, 4, (int[]) {1, 100, 1000}, 3);
    return 0;
}