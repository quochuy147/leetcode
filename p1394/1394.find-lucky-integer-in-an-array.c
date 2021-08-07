// https://leetcode.com/problems/find-lucky-integer-in-an-array/

int findLucky(int* arr, int size) {
    int count[501] = {0}, end = 0;
    for(int i = 0; i < size; ++i) {
        count[arr[i]]++;
        if(end < arr[i]) end = arr[i];
    }
    for(int i = end; i > 0; --i) {
        if(count[i] == i) return i;
    }
    return -1;
}
