// https://leetcode.com/problems/thousand-separator/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* thousandSeparator(int n){
    if(n == 0) {
        return "0";
    }
    char* s = calloc(20, sizeof(char));
    int size = 0, count = 0;
    while(n != 0) {
        if(count == 3) {
            s[size++] = '.';
            count = 0;
        }
        s[size++] = n % 10 + 48;
        n /= 10;
        count++;
    }
    for(int i = 0; i < size / 2; ++i) {
        char tmp = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = tmp;
    }
    return s;
}

void test(int n, char* wanted) {
    char* actual = thousandSeparator(n);
    if(strcmp(wanted, actual)) {
        printf("ERR: n = %d, wanted = %s but actual = %s\n", n, wanted, actual);
    }
}

int main() {
    test(987, "987");
    test(1234, "1.234");
    test(123456789, "123.456.789");
    test(0, "0");
    test(2147483647, "2.147.483.647");
    return 0;
}