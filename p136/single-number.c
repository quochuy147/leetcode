#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int singleNumber(int* nums, int size) {
    int count[60000] = {0}, length = 0;
    for(int i = 0; i < size; ++i) {
        count[nums[i] + 30000]++;
    }
    for(int i = 0; i < size; ++i) {
        if(count[nums[i] + 30000] == 1) {
            return nums[i];
        }
    }
    return 0;
}

void test(int* nums, int size, int wanted) {
    int actual = singleNumber(nums, size);
    if(actual != wanted) {
        printf("ERR: nums = ");
        print_array(nums, size);
        printf("ERR: size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main()
{
    test((int[]) {2, 2, 1}, 3, 1);
    test((int[]) {4, 1, 2, 1, 2}, 5, 4);
    test((int[]) {1}, 1, 1);
    return 0;
}
