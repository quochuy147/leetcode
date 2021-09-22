// https://leetcode.com/problems/ransom-note/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int count[123] = {0};
    int r_size = strlen(ransomNote), m_size = strlen(magazine);
    for(int i = 0; i < r_size; ++i) {
        count[ransomNote[i]]--;
    }
    for(int i = 0; i < m_size; ++i) {
        count[magazine[i]]++;
    }
    for(int i = 'a'; i <= 'z'; ++i) {
        if(count[i] < 0) {
            return false;
        }
    }
    return true;
}

void test(char* str1, char* str2, bool wanted) {
    char* ransomNote = calloc(strlen(str1), sizeof(char));
    char* magazine = calloc(strlen(str2), sizeof(char));
    strcpy(ransomNote, str1);
    strcpy(magazine, str2);
    bool actual = canConstruct(ransomNote, magazine);
    if(actual != wanted) {
        printf("ERR: ransomNote = %s, magazine = %s, wanted = %s but actual = %s\n",
        ransomNote, magazine, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test("a", "b", false);
    test("aa", "ab", false);
    test("aa", "aab", true);
    test("xyzt", "xaybzctd", true);
    return 0;
}