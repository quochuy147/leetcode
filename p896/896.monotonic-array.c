// https://leetcode.com/problems/monotonic-array/

bool isMonotonic(int* nums, int size) {
    bool inc = true, dec = true;
    for(int i = 0; i < size - 1; ++i) {
        if(nums[i] > nums[i + 1]) inc = false;
        if(nums[i] < nums[i + 1]) dec = false;
    }
    if(inc || dec) return 1;
    return 0;
}
