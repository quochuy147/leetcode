#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int end = strlen(s) - 1, count = 0;
    while(s[end] == ' ') {
        end--;
    }
    while(s[end] != ' ') {
        count++;
        end--;
        if(end == -1) break;
    }
    return count;
}

void test(char* str, int wanted) {
    char* s = calloc(strlen(str), sizeof(char));
    strcpy(s, str);
    int actual = lengthOfLastWord(s);
    if(actual != wanted) {
        printf("ERR : string = %s, wanted = %d but actual = %d\n", s, wanted, actual);
    }
}

int main()
{
    test("a", 1);
    test(" huy      ", 3);
    test("Hello World", 5);
    test("   fly me   to   the moon  ", 4);
    test("luffy is still joyboy", 6);
    return 0;
}