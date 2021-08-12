// https://leetcode.com/problems/three-consecutive-odds/

bool threeConsecutiveOdds(int* arr, int size) {
    if(size < 3) return false;
    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] % 2 == 1) {
            count++;
            continue;
        }
        if(count >= 3) return true;
        count = 0;
    }
    if(count >= 3) return true;
    return false;
}
