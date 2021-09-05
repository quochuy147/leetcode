#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char * s, char * t) {
    int size_s = strlen(s), size_t = strlen(t);
    if(size_s != size_t) {
        return false;
    }
    int count[123] = {0};
    for(int i = 0; i < size_s; ++i) {
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i = 'a'; i <= 'z'; ++i) {
        if(count[i] != 0) {
            return false;
        }
    }
    return true;
}

void test(char* str1, char* str2, bool wanted) {
    char* s = calloc(strlen(str1), sizeof(char));
    char* t = calloc(strlen(str2), sizeof(char));
    strcpy(s, str1);
    strcpy(t, str2);
    bool actual = isAnagram(s, t);
    if(actual != wanted) {
        printf("ERR : s = %s, t = %s, wanted = %s but actual = %s",
        s, t, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test("abc", "bca", true);
    test("anagram", "nagaram", true);
    test("rat", "cat", false);
    test("defg", "defgg", false);
    test("leetcode", "odleteec", true);
    return 0;
}