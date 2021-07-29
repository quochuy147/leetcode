// https://leetcode.com/problems/remove-element/

int removeElement(int* nums, int size, int val){
    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(nums[i] == val) continue;
        nums[count++] = nums[i];
    }
    return count;
}

