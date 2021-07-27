// https://leetcode.com/problems/majority-element/

void quick_sort(int* a, int start, int end)
{
    if(end - start <= 1) return;
    int left = start;
    int right = end - 1;
    int pivot = a[start];
    while(left < right) {
        while(left < right && a[left] <= pivot) {
            left++;
        }
        while(left < right && pivot < a[right]) {
            right--;
        }
        if(left < right) {
            int tmp = a[left];
            a[left] = a[right];
            a[right] = tmp;
        }
    }
    if(a[left] < pivot) {
        int tmp = a[start];
        a[start] = a[left];
        a[left] = tmp;
    }
    int mid = left;
    quick_sort(a, start, mid);
    quick_sort(a, mid, end);
}

int majorityElement(int* nums, int size){
    quick_sort(nums, 0, size);
    int n = size / 2, count = 1, res = 0;
    for(int i = 0; i < size - 1; ++i) {
        if(nums[i] == nums[i + 1]) {
            count++;
            continue;
        }
        if(count > n) return nums[i];
        count = 1;
    }
    if(count > n) return nums[size - 1];
    return 0;
}

