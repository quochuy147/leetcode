// https://leetcode.com/problems/unique-number-of-occurrences/

bool uniqueOccurrences(int* arr, int size) {
    int count1[2001] = {0}, count2[1001] = {0}, end = 0;
    for(int i = 0; i < size; i++) {
        count1[arr[i] + 1000]++;
        if(end < arr[i] + 1000) {
            end = arr[i] + 1000;
        }
    }
    for(int i = 1; i <= end; ++i) {
        if(count1[i] != 0) {
            count2[count1[i]]++;

        }
    }
    for(int i = 1; i <= size; ++i) {
        if(count2[i] > 1) return false;
    }
    return true;
}
