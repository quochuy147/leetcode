// https://leetcode.com/problems/maximum-subarray/

int maxSubArray(int* nums, int size){
    int sum = 0, total_sum = INT_MIN;
    for(int i = 0; i < size; ++i) {
        if(nums[i] > sum && sum < 0) sum = nums[i];
        else sum += nums[i];
        if(total_sum < sum) total_sum = sum;
    }
    return total_sum;
}
