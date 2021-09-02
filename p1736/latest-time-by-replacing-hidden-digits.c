#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * maximumTime(char* time) {
    if(time[0] == '?') {
        time[0] = time[1] < '4' || time[1] == '?' ? '2' : '1'; 
    }
    if(time[1] == '?') {
        time[1] = time[0] == '2' ? '3' : '9';
    }
    time[3] = time[3] == '?' ? '5' : time[3];
    time[4] = time[4] == '?' ? '9' : time[4];
    return time;
}

void test(char* str1, char* str2) {
    char* time = calloc(strlen(str1), sizeof(int));
    char* wanted = calloc(strlen(str2), sizeof(int));
    strcpy(time, str1);
    strcpy(wanted, str2);
    char* actual = maximumTime(time);
    if(strcmp(wanted, actual)) {
        printf("ERR : time = %s, wanted = %s, but actual = %s\n", time, wanted, actual);
    }
}

int main()
{
    test("2?:?0", "23:50");
    test("0?:3?", "09:39");
    test("1?:22", "19:22");
    test("?3:5?", "23:59");
    test("?9:30", "19:30");
    test("2?:2?", "23:29");
    test("??:??", "23:59");
    return 0;
}