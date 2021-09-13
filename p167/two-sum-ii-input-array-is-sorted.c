// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* twoSum(int* numbers, int size, int target, int* returnSize) {
    int* out = (int*) malloc(2 * sizeof(int));
    *returnSize = 2;
    int l = 0, r = size - 1;
    while(l < r) {
        int k = numbers[l] + numbers[r];
        if(target == k) {
            out[0] = l + 1;
            out[1] = r + 1;
            return out;
        }
        if(target < k) {
            r--;
        }
        else {
            l++;
        }
    }
    return 0;
}

void test(int* numbers , int size , int target, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = twoSum(numbers, size, target, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main()
{
    test((int[]) {2, 7, 11, 15}, 4, 9, (int[]) {1, 2}, 2);
    test((int[]) {2, 3, 4}, 3, 6, (int[]) {1, 3}, 2);
    test((int[]) {-1, 0}, 2, -1, (int[]) {1, 2}, 2);
    test((int[]) {1, 2, 3, 4, 5, 6, 7, 8}, 8, 10, (int[]) {2, 8}, 2);
    return 0;
}