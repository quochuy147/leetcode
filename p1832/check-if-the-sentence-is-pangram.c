// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool checkIfPangram(char* sentence) {
    int words[123] = {0}, size = strlen(sentence), count = 0;
    for(int i = 0; i < size; ++i) {
        if(words[sentence[i]]++ == 0) {
            count++;
        }
    }
    return count == 26;
}

void test(char* str, bool wanted) {
    char* sentence = calloc(strlen(str) + 1, sizeof(char));
    strcpy(sentence, str);
    bool actual = checkIfPangram(sentence);
    if(actual != wanted) {
        printf("ERR: sentence = %s, wanted = %s but actual = %s\n",
        sentence, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test("thequickbrownfoxjumpsoverthelazydog", true);
    test("leetcode", false);
    test("abcdefghijklmnopqrstuvwxyz", true);
    test("qwertyuiopasdfghjklzxcvbnm", true);
    return 0;
}