#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* largestOddNumber(char* num) {
    int size = strlen(num) - 1;
    char* res = calloc(100001, sizeof(char));
    for(int i = size; i >= 0; --i) {
        if(num[i] % 2 == 1) {
            strncpy(res, num, i + 1);
            break;
        }
    }
    return res;
}

void test(char* num, char* wanted) {
    char* str = calloc(strlen(num), sizeof(char));
    strcpy(str, num);
    char* actual = calloc(100001, sizeof(char));
    actual = largestOddNumber(num);
    int check = strcmp(actual, wanted);
    if(check != 0){
        printf("ERR: string = %s, wanted = %s but actual = %s\n", num, wanted, actual);
    }
    free(actual);
}

int main()
{
    test("52", "5");
    test("2", "");
    test("35427", "35427");
    test("4206", "");
    test("284789327583242", "284789327583");
    return 0;
}