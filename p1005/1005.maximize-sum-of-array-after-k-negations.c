// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/

void sort(int* a, int start, int end) {
    if(end - start <= 1) {
        return;
    }
    int p = a[start];
    int l = start;
    int r = end - 1;
    while(l < r) {
        while(l < r && a[l] <= p) {
            l++;
        }
        while(l < r && p < a[r]) {
            r--;
        }
        if(l < r) {
            int tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
        }
    }
    if(a[l] < p) {
        int tmp = a[start];
        a[start] = a[l];
        a[l] = tmp;
    }
    int m = l;
    sort(a, start, m);
    sort(a, m, end);
}

int largestSumAfterKNegations(int* nums, int size, int k) {
    int sum = 0, min = 101;
    sort(nums, 0, size);
    for(int i = 0; i < size; ++i) {
        if(k == 0 || nums[i] >= 0) break;
        nums[i] = -nums[i];
        k--;
    }
    for(int i = 0; i < size; ++i) {
        sum += nums[i];
        if(min > nums[i]) min = nums[i];
    }
    if(k % 2 == 1) {
        sum -= min * 2;
    }
    return sum;
}
