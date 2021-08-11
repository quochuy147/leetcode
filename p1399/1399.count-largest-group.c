// https://leetcode.com/problems/count-largest-group/

int countLargestGroup(int n) {
    int count[40] = {0}, max = 0, res = 0;
    for(int i = 1; i <= n; ++i) {
        int sum = 0, j = i;
        while(j) {
            sum += j % 10;
            j /= 10;
        }
        count[sum]++;
        if(max < count[sum]) max = count[sum];
    }
    for(int i = 1; i <= 36; ++i) {
        if(count[i] == max) res++;
    }
    return res;
}
