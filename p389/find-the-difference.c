// https://leetcode.com/problems/find-the-difference/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char findTheDifference(char* s, char* t){
    int count[123] = {0};
    for(int i = 0; i < strlen(s); ++i) {
        count[s[i]]++;
        count[t[i]]--;
    }
    count[t[strlen(t) - 1]]--;
    for(int i = 'a'; i <= 'z'; ++i) {
        if(count[i]) {
            return (char)i;
        }
    }
    return 0;
}

void test(char* str1, char* str2, char wanted) {
    char* s = calloc(strlen(str1), sizeof(char));
    char* t = calloc(strlen(str2), sizeof(char));
    strcpy(s, str1);
    strcpy(t, str2);
    char actual = findTheDifference(s, t);
    if(actual != wanted) {
        printf("ERR: s = %s, t = %s, wanted = %c but actual = %c", s, t, wanted, actual);
    }
}

int main() {
    test("abcd", "abcde", 'e');
    test("", "y", 'y');
    test("a", "aa", 'a');
    test("ae", "aea", 'a');
    test("xyzt", "zhxyt", 'h');
    return 0;
}