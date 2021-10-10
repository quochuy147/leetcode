// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../lib/array.h"

bool canBeEqual(int* target, int target_size, int* arr, int arr_size) {
    int count[1001] = {0};
    for(int i = 0; i < arr_size; ++i) {
        count[target[i]]++;
    }
    for(int i = 0; i < arr_size; ++i) {
        count[arr[i]]--;
        if(count[arr[i]] < 0) {
            return false;
        }
    }
    return true;
}

void test(int* target, int target_size, int* arr, int arr_size, bool wanted) {
    bool actual = canBeEqual(target, target_size, arr, arr_size);
    if(actual != wanted) {
        printf("ERR: target = ");
        print_array(target, target_size);
        printf("ERR: arr = ");
        print_array(arr, arr_size);
        printf("ERR: target_size = %d, arr_size = %d, wanted = %s but actual = %s\n",
        target_size, arr_size, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test((int[]) {1, 2, 3, 4}, 4, (int[]) {2, 4, 1, 3}, 4, true);
    test((int[]) {7}, 1, (int[]) {7}, 1, true);
    test((int[]) {1, 12}, 2, (int[]) {12, 1}, 2, true);
    test((int[]) {3, 7, 9}, 3, (int[]) {3, 7, 11}, 3, false);
    test((int[]) {1, 1, 1, 1, 1}, 5, (int[]) {1, 1, 1, 1, 1}, 5, true);
    return 0;
}