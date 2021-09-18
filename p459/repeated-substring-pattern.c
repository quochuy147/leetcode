// https://leetcode.com/problems/repeated-substring-pattern/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* licenseKeyFormatting(char* s, int k) {
    int size = strlen(s), count = 0, end = 0;
    char* res = calloc(size * 2, sizeof(char));
    for(int i = size - 1; i >= 0; --i) {
        if(s[i] == '-') {
            continue;
        }
        if(count == k) {
            res[end++] = '-';
            count = 0;
        }
        res[end++] = s[i] >= 'a' && s[i] <= 'z' ? s[i] - 32 : s[i];
        count++; 
    }
    for(int i = 0; i < end / 2; ++i) {
        char tmp = res[i];
        res[i] = res[end - i - 1];
        res[end - i - 1] = tmp;
    }
    return res;
}

void test(char* str1, int k, char* str2) {
    char* s = calloc(strlen(str1), sizeof(char));
    char* wanted = calloc(strlen(str2), sizeof(char));
    strcpy(s, str1);
    strcpy(wanted, str2);
    char* actual = licenseKeyFormatting(s, k);
    if(strcmp(actual, wanted) != 0) {
        printf("ERR: s = %s, k = %d, wanted = %s but actual = %s\n", s, k, wanted, actual);
    }
}

int main() {
    test("5F3Z-2e-9-w", 4, "5F3Z-2E9W");
    test("2-5g-3-J", 2, "2-5G-3J");
    test("abcd", 1, "A-B-C-D");
    test("leetcode", 4, "LEET-CODE");
    return 0;
}