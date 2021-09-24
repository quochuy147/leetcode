// https://leetcode.com/problems/shuffle-string/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/array.h"

char* restoreString(char* s, int* indices, int indicesSize) {
    char* res = calloc(indicesSize + 1, sizeof(char));
    for(int i = 0; i < indicesSize; ++i) {
        res[indices[i]] = s[i];
    }
    return res;
}

void test(char* str, int* indices, int indicesSize, char* wanted) {
    char* s = calloc(strlen(str) + 1, sizeof(char));
    strcpy(s, str);
    char* actual = restoreString(s, indices, indicesSize);
    if(strcmp(actual, wanted) != 0) {
        printf("ERR: s = %s, indices = ", s);
        print_array(indices, indicesSize);
        printf("indicesSize = %d, wanted = %s but actual = %s\n", indicesSize, wanted, actual);
    }
}

int main() {
    test("codeleet", (int[]) {4, 5, 6, 7, 0, 2, 1, 3}, 8, "leetcode");
    test("abc", (int[]) {0, 1, 2}, 3, "abc");
    test("aiohn", (int[]) {3, 1, 4, 2, 0}, 5, "nihao");
    test("dakrwauda", (int[]) {1, 4, 6, 5, 7, 0, 2, 3, 8}, 9, "adudarkwa");
    return 0;
}