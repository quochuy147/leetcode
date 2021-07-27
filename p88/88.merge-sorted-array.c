// https://leetcode.com/problems/merge-sorted-array/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int* a = (int*)calloc(m + n, sizeof(int));
    int i = 0, j = 0, t = 0;
    while(i < m && j< n) {
        if(nums1[i] <= nums2[j]) {
            a[t++] = nums1[i++];
        }
        else {
            a[t++] = nums2[j++];
        }
    }
    while(i < m) {
        a[t++] = nums1[i++];
    }
    while(j < n) {
        a[t++] = nums2[j++];
    }
    for(int i = 0; i < n + m; ++i) nums1[i] = a[i];
}
