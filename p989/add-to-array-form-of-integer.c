// https://leetcode.com/problems/add-to-array-form-of-integer/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* addToArrayForm(int* num, int size, int k, int* returnSize) {
    int* sum = malloc(10001 * sizeof(int));
    int debt = 0, count = 0;
    int i = size - 1;
    while(i > -1 || k != 0) {
        int x = i > -1 ? num[i] : 0;
        int y = k % 10;
        int s = x + y + debt;
        sum[count++] = s % 10;
        debt = s / 10;
        k /= 10;
        i--;
    }
   if(debt) {
        sum[count++] = 1;
    }
    for(int i = 0; i < count / 2; ++i) {
        int tmp = sum[i];
        sum[i] = sum[count - i - 1];
        sum[count - i - 1] = tmp;
    }
    *returnSize = count;
    return sum;
}

void test(int* num, int size, int k, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = addToArrayForm(num, size, k, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test((int[]) {1, 2, 0, 0}, 4, 34, (int[]) {1, 2, 3, 4}, 4);
    test((int[]) {2, 7, 4}, 3, 181, (int[]) {4, 5, 5}, 3);
    test((int[]) {2, 1, 5}, 3, 806, (int[]) {1, 0, 2, 1}, 4);
    test((int[]) {9, 9, 9, 9, 9, 9, 9, 9, 9, 9}, 10, 1, (int[]) {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 11);
    return 0;
}