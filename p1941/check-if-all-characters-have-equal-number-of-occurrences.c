#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool areOccurrencesEqual(char* s) {
    int count[123] = {0}, size = strlen(s), check;
    for(int i = 0; i < size; ++i) {
        count[s[i]]++;
    }
    check = count[s[0]];
    for(int i = 'a'; i <= 'z'; ++i) {
        if(check != count[i] && count[i] != 0) {
            return false;
        }
    }
    return true;
}

void test(char* s, bool wanted) {
    bool actual = areOccurrencesEqual(s);
    if(actual != wanted) {
        printf("ERR : string = %s, wanted = %s, but actual = %s",
        s, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main()
{
    test("abacbc", true);
    test("aaabb", false);
    test("xyztxyzt", true);
    test("defgdef", false);
    test("abababababab", true);
}