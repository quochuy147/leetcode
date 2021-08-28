#include <stdio.h>
#include <stdlib.h>

int findLengthOfLCIS(int* nums, int size) {
    int max = 0, start = 0;
    for(int i = 1; i < size; ++i) {
        if(nums[i] <= nums[i - 1]) {
            max = (max < i - start) ? i - start : max;
            start = i;
        }
    }
    return max < size - start ? size - start : max;
}

void test(int* nums, int size, int wanted) {
    int actual = findLengthOfLCIS(nums, size);
    if(actual != wanted) {
        printf("ERR : size = %d, wanted = %d but actual = %d", size, wanted, actual);
    }
}

int main()
{
    test((int[]) {1, 3, 5, 4, 7}, 5, 3);
    test((int[]) {2, 2, 2, 2, 2}, 5, 1);
}