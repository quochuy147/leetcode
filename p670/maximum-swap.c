// https://leetcode.com/problems/maximum-swap/

#include <stdio.h>
#include <stdlib.h>

int maximumSwap(int num){
    int nums[9], size = 0;
    while(num != 0) {
        nums[size++] = num % 10;
        num /= 10;
    }
    for(int i = size - 1; i > 0; --i) {
        int max = 0;
        for(int j = 0; j < i; ++j) {
            if(nums[max] < nums[j]) {
                max = j;
            }
        }
        if(nums[max] > nums[i]) {
            int tmp = nums[i];
            nums[i] = nums[max];
            nums[max] = tmp;
            break;
        }
    }
    for(int i = size - 1; i >= 0; --i) {
        num = num * 10 + nums[i];
    }
    return num;
}

void test(int num, int wanted) {
    int actual = maximumSwap(num);
    if(actual != wanted) {
        printf("ERR: num = %d, wanted = %d but actual = %d\n", num, wanted, actual);
    }
}

int main() {
    test(2736, 7236);
    test(9973, 9973);
    test(9937, 9973);
    test(19283034, 91283034);
    return 0;
}