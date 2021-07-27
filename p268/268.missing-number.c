// https://leetcode.com/problems/missing-number/

int missingNumber(int* nums, int size){
    int total_sum = (size + 1)*(size) / 2;
    for(int i = 0; i < size; ++i) total_sum -= nums[i];
    return total_sum;
}
