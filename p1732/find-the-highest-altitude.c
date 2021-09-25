// https://leetcode.com/problems/find-the-highest-altitude/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int largestAltitude(int* gain, int size) {
    int max = gain[0] < 0 ? 0 : gain[0];
    for(int i = 1; i < size; ++i) {
        gain[i] += gain[i - 1];
        max = max < gain[i] ? gain[i] : max;
    }
    return max;
}

void test(int* gain, int size, int wanted) {
    int actual = largestAltitude(gain, size);
    if(actual != wanted) {
        printf("ERR: gain = ");
        print_array(gain, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main() {
    test((int[]) {1}, 1, 1);
    test((int[]) {-5, 1, 5, 0, -7}, 5, 1);
    test((int[]) {-4, -3, -2, -1, 4, 3, 2}, 7, 0);
    test((int[]) {1, 2, 3, 4, 5}, 5, 15);
    test((int[]) {-100, -100, 100, 100, -100}, 5, 0);
    return 0;
}