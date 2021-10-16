//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseVowels(char* s){
    int size = strlen(s), count = 0;
    char* vowels = malloc((size + 1) * sizeof(char));
    for(int i = 0; i < size; ++i) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
        || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowels[count++] = s[i];
        }
    }
    for(int i = 0; i < count / 2; ++i) {
        char tmp = vowels[i];
        vowels[i] = vowels[count - i - 1];
        vowels[count - i - 1] = tmp;
    }
    count = 0;
    for(int i = 0; i < size; ++i) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
        || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            s[i] = vowels[count++];
        }
    }
    return s;
}

void test(char* str, char* wanted) {
    char* s = calloc(strlen(str) + 1, sizeof(char));
    strcpy(s, str);
    char* actual = reverseVowels(s);
    if(strcmp(wanted, actual) != 0) {
        printf("ERR: s = %s, wanted = %s but actual = %s\n", s, wanted, actual);
    }
}

int main() {
    test("hello", "holle");
    test("leetcode", "leotcede");
    test("aeiou", "uoiea");
    test("AeIoU", "UoIeA");
    return 0;
}