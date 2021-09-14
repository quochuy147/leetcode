// https://leetcode.com/problems/reverse-prefix-of-word/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reversePrefix(char* word, char ch) {
    int size = strlen(word), end = 0;
    for(int i = 0; i < size; ++i) {
        if(word[i] == ch) {
            end = i;
            break;
        }
    }
    for(int i = 0; i <= end / 2; ++i) {
        char tmp = word[i];
        word[i] = word[end - i];
        word[end - i] = tmp;
    }
    return word;
}

void test(char* str, char ch, char* wanted) {
    char* word = malloc(strlen(str) * sizeof(char));
    strcpy(word, str);
    char* actual = reversePrefix(word, ch);
    if(strcmp(wanted, actual) != 0) {
        printf("ERR: word = %s, ch = %c, wanted = %s but actual = %s\n", word, ch, wanted, actual);
    }
}

int main() {
    test("abcdef", 'd', "dcbaef");
    test("xyxzxe", 'z', "zxyxxe");
    test("abcd", 'z', "abcd");
    test("aaaa", 'a', "aaaa");
    return 0;
}