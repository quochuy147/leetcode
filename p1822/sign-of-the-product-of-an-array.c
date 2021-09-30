

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int arraySign(int* nums, int size){
    int negative = 0;
    for(int i = 0; i < size; ++i) {
        if(nums[i] == 0) {
            return 0;
        }
        negative = nums[i] < 0 ? negative + 1 : negative;
    }
    return negative % 2 == 0 ? 1 : -1;
}

void test(int* nums, int size, int wanted) {
    int actual = arraySign(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {0}, 1, 0);
    test((int[]) {-1, -2, -3, -4, 3, 2, 1}, 7, 1);
    test((int[]) {1, 5, 0, 2, -3}, 5, 0);
    test((int[]) {-1, 1, -1, 1, -1}, 5, -1);
    return 0;
}