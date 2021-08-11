// https://leetcode.com/problems/consecutive-characters/

int maxPower(char* s) {
    int size = strlen(s), max = 0, count = 1;
    for(int i = 0; i < size - 1; ++i) {
        if(s[i] != s[i + 1]) {
            if(max < count) max = count;
            count = 1;
            continue;
        }
        count++;
    }
    if(max < count) max = count;
    return max;
}
