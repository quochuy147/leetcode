// https://leetcode.com/problems/kth-missing-positive-number/

int findKthPositive(int* arr, int size, int k) {
    int numSize = arr[size - 1], j = 0;
    for(int i = 1; i < numSize; ++i) {
        if(i == arr[j]) {
            j++;
            continue;
        }
        k--;
        if(k == 0) return i;
    }
    return numSize + k;
}
