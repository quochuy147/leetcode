// https://leetcode.com/problems/construct-the-rectangle/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../lib/array.h"

int* constructRectangle(int area, int* returnSize){
    *returnSize = 2;
    int* res = malloc(2 * sizeof(int));
    for(int i = sqrt(area); i >= 1; --i) {
        if(area % i == 0) {
            res[0] = area / i;
            res[1] = i;
            break;
        }
    }
    return res;
}

void test(int area, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = constructRectangle(area, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test(4, (int[]) {2, 2}, 2);
    test(37, (int[]) {37, 1}, 2);
    test(122122, (int[]) {427, 286}, 2);
    test(10000000, (int[]) {3200, 3125}, 2);
    return 0;
}