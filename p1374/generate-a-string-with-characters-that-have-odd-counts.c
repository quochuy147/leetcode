// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * generateTheString(int n) {
    char* res = calloc(n + 1, sizeof(char));
    for(int i = 0; i < n - 1; ++i) {
        res[i] = 'a';
    }
    res[n - 1] = n % 2 ? 'a' : 'b';
    return res;
}

void test(int n, char* wanted) {
    char* actual = generateTheString(n);
    if(strcmp(actual, wanted) != 0) {
        printf("ERR: n = %d, wanted = %s but actual = %s\n", n, wanted, actual);
    }
}

int main() {
    test(1, "a");
    test(4, "aaab");
    test(7, "aaaaaaa");
    test(10, "aaaaaaaaab");
    return 0;
}