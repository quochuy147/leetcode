// https://leetcode.com/problems/reverse-only-letters/

char* reverseOnlyLetters(char* s) {
    int size = strlen(s), count = 0;
    char* rev_s = calloc(101, sizeof(char));
    char* res = calloc(101, sizeof(char));
    for(int i = size - 1; i >= 0; --i) {
        if(s[i] >= 'A' && s[i] <= 'Z') rev_s[count++] = s[i];
        if(s[i] >= 'a' && s[i] <= 'z') rev_s[count++] = s[i];
    }
    count = 0;
    for(int i = 0; i < size; ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            res[i] = rev_s[count++];
            continue;
        }
        if(s[i] >= 'a' && s[i] <= 'z') res[i] = rev_s[count++];
        else res[i] = s[i];
    }
    free(rev_s);
    return res;
}
