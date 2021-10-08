// https://leetcode.com/problems/minimum-moves-to-convert-string/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minimumMoves(char* s) {
    int size = strlen(s), count = 0;
    for(int i = 0; i < size; ++i) {
        if(s[i] == 'X') {
            count++;
            i = i  + 3 < size ? i + 2 : size;
        }
    }
    return count;
}

void test(char* str, int wanted) {
    char* s = calloc(sizeof(str) + 1, sizeof(char));
    strcpy(s, str);
    int actual = minimumMoves(s);
    if(actual != wanted) {
        printf("ERR: s = %s, wanted = %d but actual = %d\n", s, wanted, actual);
    }
}

int main() {
    test("XXX", 1);
    test("XXOX", 2);
    test("OOOOO", 0);
    test("XXXXXX", 2);
    test("XXXXOXX", 3);
    return 0;
}