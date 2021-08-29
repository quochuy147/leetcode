#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int size) {
    qsort(nums, size, sizeof(int), compare);
    for(int i = 0; i < size - 1; ++i) {
        if(nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

void test(int* nums, int size, bool wanted) {
    bool actual = containsDuplicate(nums, size);
    if(actual != wanted) { 
        printf("ERR : size = %d, wanted = %d but acutal = %d", size, wanted, actual);
    }
}

int main()
{
    test((int[]) {1, 2, 3, 1}, 4, true);
    test((int[]) {1, 2, 3, 4}, 4, false);
    test((int[]) {1, 1, 1, 3, 3, 4, 3, 2, 4, 2}, 10, true);
    test((int[]) {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, false);
}
