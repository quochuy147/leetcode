// https://leetcode.com/problems/search-insert-position/

int searchInsert(int* nums, int size, int target){
    int index = -1;
    for(int i = 0; i < size; ++i) {
        if(nums[i] >= target) {
            index = i;
            break;
        }
    }
    if(index == -1) index = size;
    return index;
}

