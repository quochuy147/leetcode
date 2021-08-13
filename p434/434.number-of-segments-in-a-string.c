// https://leetcode.com/problems/number-of-segments-in-a-string/

int countSegments(char* s) {
    int size = strlen(s) - 1, count = 0;
    if(size == -1) return 0;
    for(int i = 0; i < size; ++i) {
        if(s[i] != ' ' && s[i + 1] == ' ') count++;
    }
    if(s[size] == ' ') count--;
    return count + 1;
}
