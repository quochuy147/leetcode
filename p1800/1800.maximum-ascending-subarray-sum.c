// https://leetcode.com/problems/maximum-ascending-subarray-sum/

int maxAscendingSum(int* nums, int size) {
    if(size == 1) return nums[0];
    int sum = 0, max_sum = 0;
    max_sum = sum = nums[0];
    for(int i = 1; i < size; ++i) {
        if(nums[i] > nums[i - 1]) {
            sum += nums[i];
            if(max_sum < sum) max_sum = sum;
            continue;
        }
        sum = nums[i];
    }
    return max_sum;
}
