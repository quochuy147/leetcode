// https://leetcode.com/problems/number-of-good-pairs/
// Use distribution counting

int numIdenticalPairs(int* nums, int size) {
    int count[101] = {0}, res = 0;
    for(int i = 0; i < size; ++i) count[nums[i]]++;
    for(int i = 0; i < 100; ++i) {
        if(count[i] > 0) res += count[i] * (count[i] - 1) / 2;
    }
    return res;
}
