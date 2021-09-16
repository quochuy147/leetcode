// https://leetcode.com/problems/first-unique-character-in-a-string/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int firstUniqChar(char* s){
    int size = strlen(s), count[123] = {0};
    for(int i = 0; i < size; ++i) {
        count[s[i]]++;
    }
    for(int i = 0; i < size; ++i) {
        if(count[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

void test(char* str, int wanted) {
    char* s = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(s, str);
    int actual = firstUniqChar(s);
    if(actual != wanted) {
        printf("ERR: s = %s, wanted = %d but actual = %d\n", s, wanted, actual);
    }
}

int main() {
    test("leetcode", 0);
    test("loveleetcode", 2);
    test("aabb", -1);
    test("huydeptrai", 0);
    test("aabbccde", 8);
    return 0;
}