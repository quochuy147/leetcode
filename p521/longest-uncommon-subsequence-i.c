// https://leetcode.com/problems/longest-uncommon-subsequence-i/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findLUSlength(char* a, char* b) {
    return strcmp(a, b) == 0 ? -1 : strlen(a) > strlen(b) ? strlen(a) : strlen(b);
}

void test(char* str1, char* str2, int wanted) {
    char* a = calloc(strlen(str1) + 1, sizeof(char));
    char* b = calloc(strlen(str2) + 1, sizeof(char));
    strcpy(a, str1);
    strcpy(b, str2);
    int actual = findLUSlength(a, b);
    if(actual != wanted) {
        printf("ERR: a = %s, b = %s, wanted = %d but actual = %d\n", a, b, wanted, actual);
    }
}

int main() {
    test("aba", "cdc", 3);
    test("aaa", "bbb", 3);
    test("aaa", "aa", 3);
    test("aaa", "aaa", -1);
    return 0;
}