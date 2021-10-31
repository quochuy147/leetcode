// https://leetcode.com/problems/replace-all-digits-with-characters/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * replaceDigits(char * s) {
    int size = strlen(s);
    for(int i = 1; i < size; i += 2) {
        s[i] = s[i - 1] + (s[i] - 48);
    }
    return s;
}

void test(char* str, char* wanted) {
    char* s = calloc(strlen(str) + 1, sizeof(char));
    strcpy(s, str);
    char* actual = replaceDigits(s);
    if(strcmp(wanted, actual) != 0) {
        printf("ERR: s = %s, wanted = %s but actual = %s\n", s, wanted, actual);
    }
}

int main() {
    test("a", "a");
    test("a1c1e1", "abcdef");
    test("a1b2c3d4e", "abbdcfdhe");
    test("z0y1x2", "zzyzxz");
    return 0;
}