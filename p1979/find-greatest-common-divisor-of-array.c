// https://leetcode.com/problems/find-greatest-common-divisor-of-array/

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while(b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int findGCD(int* nums, int size) {
    int min = 1000, max = 0;
    for(int i = 0; i < size; ++i) {
        min = min > nums[i] ? nums[i] : min;
        max = max < nums[i] ? nums[i] : max;
    }
    return gcd(min, max);
}

void test(int* nums, int size, int wanted) {
    int actual = findGCD(nums, size);
    if(actual != wanted) {
        printf("ERR : size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {2, 5, 6, 9, 10}, 5, 2);
    test((int[]) {7, 5, 6, 8, 3}, 5, 1);
    test((int[]) {3, 3}, 2, 3);
    test((int[]) {1000, 500, 100, 50, 10}, 5, 10);
    return 0;
}