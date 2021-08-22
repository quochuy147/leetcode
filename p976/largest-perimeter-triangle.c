#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare (const void * a, const void * b) {
    return (*(int*)b - *(int*)a);
}

int largestPerimeter(int* nums, int size){
    qsort(nums, size, sizeof(int), compare);
    int edge1, edge2, edge3;
    for(int i = 0; i < size - 2; ++i) {
        edge1 = nums[i];
        edge2 = nums[i + 1];
        edge3 = nums[i + 2];
        if(edge2 + edge3 > edge1) {
            return edge1 + edge2 + edge3;
        }
    }
    return 0;
}

void test(int* nums, int size, int wanted) {
    int actual = largestPerimeter(nums, size);
    if(actual != wanted) {
        printf("ERR : size array = %d, wanted = %d but actual = %d", size, wanted, actual);
    }
}

int main()
{
    test((int[]) {2, 1, 2}, 3, 5);
    test((int[]) {1, 2, 1}, 3, 0);
    test((int[]) { 3, 6, 2, 3}, 4, 8);
    test((int[]) {6, 3, 7, 10, 34, 50}, 6, 23);
    test((int[]) {1000, 1001, 1003, 1005, 1008, 1100, 1105}, 7, 3213);
}