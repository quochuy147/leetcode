// https://leetcode.com/problems/truncate-sentence/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* truncateSentence(char* s, int k){
    int count = 0, size = strlen(s);
    char* res = calloc(size + 1, sizeof(char));
    for(int i = 0; i < size; ++i) {
        if(s[i] == ' ') {
            k--;
        }
        if(k == 0) {
            break;
        }
        res[count++] = s[i];
    }
    return res;
}

void test(char* str, int k, char* wanted) {
    char* s = calloc(strlen(str) + 1, sizeof(char));
    strcpy(s, str);
    char* actual = truncateSentence(s, k);
    if(strcmp(wanted, actual) != 0) {
        printf("ERR: s = %s, k = %d, wanted = %s but actual = %s\n", s, k, wanted, actual);
    }
}

int main() {
    test("Hello how are you Contestant", 4, "Hello how are you");
    test("What is the solution to this problem", 4, "What is the solution");
    test("chopper is not a tanuki", 5, "chopper is not a tanuki");
    test("Vuong Quoc Huy", 3, "Vuong Quoc Huy");
    return 0;
}