#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
return (*(int*)a - *(int*)b);
}

int arrayPairSum(int* nums, int size) {
    int sum = 0;
    qsort(nums, size, sizeof(int), compare);
    for(int i = 0; i < size - 1; i += 2) {
        sum += nums[i];
    }
    return sum;
}

void test(int* nums, int size, int wanted) {
    int actual = arrayPairSum(nums, size);
    if(actual != wanted) {
        printf("ERR : size = %d, wanted = %d, but actual = %d\n", size, wanted, actual);
    }
}   

int main()
{
    test((int[]) {1, 4, 3, 2}, 4, 4);
    test((int[]) {6, 2, 6, 5, 1, 2}, 6, 9);
    test((int[]) {7, 1, 4, 6, 10, 5, 3, 12}, 8, 21);
    test((int[]) {14, 7, 20, 7, 4, 6, 8, 10, 11, 12}, 10, 44);
}