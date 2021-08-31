// Use backtracking to solve the problem
// Level up : Dynamic programming

#include <stdio.h>
#include <stdlib.h>

int sum = 0, count = 0;

void find(int i, int* nums, int size, int target) {
    for(int j = 0; j <= 1; ++j) {
        sum += j ? nums[i] : -nums[i];
        if(i == size) {
            if(sum == target) {
                count++;
            }
        }
        else {
            find(i + 1, nums, size, target);
        }
        sum -= j ? nums[i] : -nums[i];
    }
}

int findTargetSumWays(int* nums, int size, int target) {
    count = 0;
    find(0, nums, size - 1, target);
    return count;
}

void test(int* nums, int size, int target, int wanted) {
    int actual = findTargetSumWays(nums, size, target);
    if(actual != wanted) {
        printf("ERR : size = %d, wanted = %d but actual = %d", size, wanted, actual);
    }
}

int main()
{
    test((int[]) {1, 1, 1, 1, 1}, 5, 3, 5);
    test((int[]) {1}, 1, 1, 1);
    test((int[]) {1, 2, 3, 4, 5, 6, 7, 8, 9}, 9, 9, 21);
    test((int[]) {3, 7, 5, 9, 11, 12}, 6, 9, 3);
}
