#include <stdio.h>
#include <stdlib.h>

int repeatedNTimes(int* nums, int size) {
    int count[10001] = {0};
    for(int i = 0; i < size; ++i) {
        count[nums[i]]++;
        if(count[nums[i]] == 2) {
            return nums[i];
        }
    }
    return 0;
}

void test(int* nums , int size , int wanted) {
    int actual = repeatedNTimes(nums, size);
    if(actual != wanted){
        printf("ERR: size array = %d, wanted = %d but actual = %d\n", size, wanted, actual);
    }
}

int main()
{i
    test((int[]){2, 1, 2, 5, 3, 2}, 6, 2);
    test((int[]){5, 1, 5, 2, 5, 3, 5, 4}, 8, 5);
    test((int[]){2, 1, 2, 5, 3, 2}, 6, 2);
    test((int[]){0}, 0, 0);
}
