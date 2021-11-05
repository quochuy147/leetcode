// https://leetcode.com/problems/count-good-triplets/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"

int countGoodTriplets(int* arr, int size, int a, int b, int c){
    int count = 0;
    for(int i = 0; i < size - 2; ++i) {
        for(int j = i + 1; j < size - 1; ++j) {
            for(int k = j + 1; k < size; ++k) {
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                    count++;
                }
            }
        }
    }
    return count;
}

void test(int* arr, int size, int a, int b, int c, int wanted) {
    int actual = countGoodTriplets(arr, size, a, b, c);
    if(wanted != actual) {
        printf("ERR: arr = ");
        print_array(arr, size);
        printf("ERR: size = %d, a = %d, b = %d, c = %d, wanted = %d but actual = %d\n", size, a, b, c, wanted, actual);
    }
}

int main() {
    test((int[]) {3, 0, 1, 1, 9, 7}, 6, 7, 2, 3, 4);
    test((int[]) {1, 1, 2, 2, 3}, 5, 0, 0, 1, 0);
    test((int[]) {1, 2, 3}, 3, 2, 1, 2, 1);
    return 0;
}