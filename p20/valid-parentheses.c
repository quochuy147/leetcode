#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char * s) {
    int size = strlen(s), count = 1;
    char* p = calloc(size + 2, sizeof(char));
    for(int i = 0; i < size; ++i) {
        if(s[i] == '(') {
            p[++count] = ')';
            continue;
        }
        if(s[i] == '{') {
            p[++count] = '}';
            continue;
        }
        if(s[i] == '[') {
            p[++count] = ']';
            continue;
        }
        if(s[i] == p[count]) {
            count--;
        }
        else {
            return false;
        }
    }   
    return count == 1 ? true : false;
}

void test(char* str, bool wanted) {
    char* s = calloc(strlen(str), sizeof(char)); 
    strcpy(s, str);
    bool actual = isValid(s);
    if(actual != wanted) {
        printf("ERR : string = %s, wanted = %s, but actual = %s",
        s, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main()
{
    test("[](){}", 1);
    test("(", 0);
    test("}", 0);
    test("{])", 0);
    test("([])", 1);
    test("{(})", 0);
    test("{{{{[[[[(([]))]]]]}}}}", 1);
}