// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../lib/array.h"

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool canMakeArithmeticProgression(int* arr, int size) {
    qsort(arr, size, sizeof(int), compare);
    for(int i = 0; i < size - 2; ++i) {
        if(arr[i] - arr[i + 1] != arr[i + 1] - arr[i + 2]) {
            return false;
        }
    }
    return true;
}

void test(int* arr, int size, bool wanted) {
    bool actual = canMakeArithmeticProgression(arr, size);
    if(actual != wanted) {
        printf("ERR: arr = ");
        print_array(arr, size);
        printf("size = %d, wanted = %s but actual = %s\n",
        size, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test((int[]) {3, 5, 1}, 3, true);
    test((int[]) {1, 2, 4}, 3, false);
    test((int[]) {1, 2}, 2, true);
    test((int[]) {-100, 100, -50, 50, 0}, 5, true);
    return 0;
}