// https://leetcode.com/problems/reverse-string/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* s, int size){
    for(int i = 0; i < size / 2; ++i) {
        char tmp = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = tmp;
    }
}

void test(char* str, int size, char* wanted) {
    char* s = calloc(strlen(str), sizeof(char));
    char* actual = calloc(strlen(s), sizeof(char));
    strcpy(s, str);
    strcpy(actual, s);
    reverseString(actual, size);
    if(strcmp(actual, wanted) != 0) {
        printf("ERR: s = %s, wanted = %s but actual = %s\n", s, wanted, actual);
    }
}

int main() {
    test("hello", 5, "olleh");
    test("HannaH", 6, "HannaH");
    test("a", 1, "a");
    test("ab", 2, "ba");
    return 0;
}