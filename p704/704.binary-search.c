// https://leetcode.com/problems/binary-search/

int search(int* nums, int size, int target) {
    int l = 0, r = size - 1, m = 0;
    while(l <= r) {
        m = (l + r) / 2;
        if(nums[m] == target) return m;
        if(nums[m] > target) r = m - 1;
        else l = m + 1;
    }
    return -1;
}
