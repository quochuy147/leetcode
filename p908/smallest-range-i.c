#include <stdio.h>
#include <stdlib.h>

int smallestRangeI(int* nums, int size, int k) {
    int min = nums[0], max = nums[0], res;
    for(int i = 0; i < size; ++i) {
        if(max < nums[i]) {
            max = nums[i];
        }
        if(min > nums[i]) {
            min = nums[i];
        }
    }
    res = (max - k) - (min + k);
    return res > 0 ? res : 0;
}

void test(int* nums, int size, int k, int wanted) {
    int actual = smallestRangeI(nums, size, k);
    if(wanted != actual) {
        printf("ERR : size array = %d, k = %d, wanted = %d but actual = %d", size, k, wanted, actual);
    }
}

int main()
{
    test((int[]) {1}, 1, 0, 0);
    test((int[]) {14}, 1, 20, 0);
    test((int[]) {0, 10}, 2, 2, 6);
    test((int[]) {1, 3, 6}, 3, 3, 0);
    test((int[]) {2, 6, 1, 100, 23, 49}, 6, 20, 59);
}