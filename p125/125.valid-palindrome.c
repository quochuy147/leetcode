// https://leetcode.com/problems/valid-palindrome/

bool isPalindrome(char* s) {
    int count = 0, size = strlen(s);
    for(int i = 0; i < size; ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        if(s[i] >= 'a' && s[i] <= 'z') s[count++] = s[i];
        if(s[i] >= '0' && s[i] <= '9') s[count++] = s[i];
    }
    for(int i = 0; i < count / 2 ; ++i) {
        if(s[i] != s[count - i - 1]) return false;
    }
    return true;
}
