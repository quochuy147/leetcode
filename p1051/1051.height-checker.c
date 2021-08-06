// https://leetcode.com/problems/height-checker/

int heightChecker(int* heights, int size) {
    int dc[101] = {0},sort_heights[101];
    int check_num = heights[0], count = 0;
    for(int i = 0; i < size; ++i) {
        dc[heights[i]]++;
    }
    for(int i = 0; i <= 100; ++i) {
        while(dc[i]--) {
            sort_heights[count++] = i;
        }
    }
    count = 0;
    for(int i = 0; i < size; ++i) {
        if(heights[i] != sort_heights[i]) count++;
    }
    return count;
}
