#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int size) {
    int count[4001] = {0};
    if(size == 0) return false;
    for(int i = 0; i < size; ++i) {
        count[arr[i] + 2000]++;
    }
    if(count[2000] == 1) {
        count[2000] = 0;
    }
    for(int i = 0; i < size; ++i) {
        if(count[arr[i] * 2 + 2000] > 0) {
            return true;
        }
    }
    return false;
}

void test(int* arr, int size, bool wanted) {
    bool actual = checkIfExist(arr, size);
    if(actual != wanted) {
        printf("ERR : size array = %d, wanted = %s but actual = %s",
        size, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main()
{
    test((int[]) {10, 2, 5, 3}, 4, 1);
    test((int[]) {7, 1, 14, 11}, 4, 1);
    test((int[]) {3, 1, 7, 11}, 4, 0);
    test((int[]) {0}, 1, 0);
    test((int[]) {0, 0}, 2, 1);
    test((int[]) {-5, 8, -6, 4, -1, -12}, 6, 1);
    test((int[]) {}, 0, 0);
    return 0;
}