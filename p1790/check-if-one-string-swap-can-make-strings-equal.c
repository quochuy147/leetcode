// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool areAlmostEqual(char* s1, char* s2){
    int x = -1, y = -1, size = strlen(s1);
    for(int i = 0; i < size; ++i) {
        x = s1[i] != s2[i] && x == -1 ? i : x;
        y = s1[i] != s2[i] && x != -1 ? i : y;
        if(x != y) {
            char tmp = s1[x];
            s1[x] = s1[y];
            s1[y] = tmp;
            break;
        }
    }
    return strcmp(s1, s2) ? false : true;
}

void test(char* str1, char* str2, bool wanted) {
    char* s1 = calloc(strlen(str1), sizeof(char));
    char* s2 = calloc(strlen(str2), sizeof(char));
    strcpy(s1, str1);
    strcpy(s2, str2);
    bool actual = areAlmostEqual(s1, s2);
    if(actual != wanted) {
        printf("ERR: s1 = %s, s2 = %s, wanted = %s but actual = %s\n",
        s1, s2, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test("bank", "kanb", true);
    test("attack", "defend", false);
    test("abcd", "dcba", false);
    test("darkbruhlmao", "bruhbruhlmao", false);
    test("adudarkwa", "udadarkwa", true);
    return 0;
}