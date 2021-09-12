// https://leetcode.com/problems/add-strings/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addStrings(char* num1, char* num2) {
    char* sum = calloc(10000, sizeof(char));
    int num1_size = strlen(num1) - 1, num2_size = strlen(num2) - 1;
    int size = num1_size > num2_size ? num1_size : num2_size;
    int debt = 0, count = 0;
    for(int i = 0; i <= size; ++i) {
        int x = num1_size >= 0 ? num1[num1_size] - '0' : 0;
        int y = num2_size >= 0 ? num2[num2_size] - '0' : 0;
        int s = x + y + debt;
        sum[count++] = (char)(s % 10 + 48);
        debt = s / 10;
        num1_size--;
        num2_size--;
    }
    if(debt) {
        sum[count++] = '1';
    }
    for(int i = 0; i < count / 2; ++i) {
        char tmp = sum[i];
        sum[i] = sum[count - i - 1];
        sum[count - i - 1] = tmp;
    }
    return sum;
}

void test(char* str1, char* str2, char* wanted) {
    char* num1 = malloc(strlen(str1) * sizeof(char));
    char* num2 = malloc(strlen(str1) * sizeof(char));
    char* actual = malloc(sizeof(wanted) * sizeof(char)); 
    strcpy(num1, str1);
    strcpy(num2, str2);
    actual = addStrings(num1, num2);
    if(strcmp(wanted, actual) != 0) {
        printf("ERR: num1 = %s, num2 = %s, wanted = %s but actual = %s\n", num1, num2, wanted, actual);
    }
    free(num1);
    free(num2);
    free(actual);
}

int main() {
    test("11", "123", "134");
    test("456", "77", "533");
    test("0", "0", "0");
    test("9999", "1", "10000");
    test("9999999999", "9999999999", "19999999998");
    return 0;
}