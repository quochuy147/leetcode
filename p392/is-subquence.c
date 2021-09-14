// https://leetcode.com/problems/is-subsequence/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t){
    int s_size = strlen(s), t_size = strlen(t);
    int index = 0, count = 0;
    for(int i = 0; i < s_size; ++i) {
        for(int j = index; j < t_size; ++j) {
            index = j + 1;
            if(s[i] == t[j]) {
                count++;
                break;
            }
        }
    }
    return count == s_size ? true : false;
}

void test(char* str1, char* str2, bool wanted) {
    char* s = malloc(strlen(str1) * sizeof(char));
    char* t = malloc(strlen(str2) * sizeof(char));
    strcpy(s, str1);
    strcpy(t, str2);
    bool actual = isSubsequence(s, t);
    if(actual != wanted) {
        printf("ERR: s = %s, t = %s, wanted = %s but actual = %s",
        s, t, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test("abc", "ahbgdc", true);
    test("axc", "ahbgdc", false);
    test("a", "aa", true);
    test("abcd", "cdba", false);
    test("abcdef", "abcd", false);
    test("a", "b", false);
    test("xyzt", "xyzxyzxyz", false);
    return 0;
}