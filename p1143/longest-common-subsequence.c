// https://leetcode.com/problems/longest-common-subsequence/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a, b) ( a > b ? a : b)

int longestCommonSubsequence(char* text1, char* text2){
    int size1 = strlen(text1), size2 = strlen(text2);
    int dp[size1][size2];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < size1; ++i) {
        for(int j = 0; j < size2; ++j) {
            if(text1[i] == text2[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }
    return dp[size1][size2];
}

void test(char* str1, char* str2, int wanted) {
    char* text1 = calloc(strlen(str1), sizeof(char));
    char* text2 = calloc(strlen(str2), sizeof(char));
    strcpy(text1, str1);
    strcpy(text2, str2);
    int actual = longestCommonSubsequence(text1, text2);
    if(actual != wanted) {
        printf("ERR: text1 = %s, text2 = %s, wanted = %d but actual = %d\n", text1, text2, wanted, actual);
    }
}

int main() {
    test("abcde", "ace", 3);
    test("abc", "abc", 3);
    test("abc", "def", 0);
    test("axbyczdt", "xyzt", 4);
    return 0;
}