// https://leetcode.com/problems/plus-one/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int* plusOne(int* digits, int size, int* returnSize){
    int* sum = malloc((size + 1) * sizeof(int));
    int debt = 0, count = 0;
    for(int i = size - 1; i >= 0; --i) {
        int x = digits[i];
        int y = i == size - 1 ? 1 : 0;
        int s = x + y + debt;
        sum[count++] = s % 10;
        debt = s / 10;
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

void test(int* digits, int size, int* wanted, int wanted_size) {
    int* returnSize = malloc(1 * sizeof(int));
    int* actual = plusOne(digits, size, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main()
{
    test((int[]) {1, 2, 3}, 3, (int[]) {1, 2, 4}, 3);
    test((int[]) {4, 3, 2, 1}, 4, (int[]) {4, 3, 2, 2}, 4);
    test((int[]) {0}, 1, (int[]) {1}, 1);
    test((int[]) {9}, 1, (int[]) {1, 0}, 2);
    test((int[]) {9, 9, 9, 9}, 4, (int[]) {1, 0, 0, 0, 0}, 5);
    return 0;
}
