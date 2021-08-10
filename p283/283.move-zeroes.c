// https://leetcode.com/problems/move-zeroes/

void moveZeroes(int* nums, int size) {
    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(nums[i] != 0) nums[count++] = nums[i];
    }
    for(int i = count; i < size; ++i) nums[i] = 0;
}
