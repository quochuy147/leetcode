// https://leetcode.com/problems/excel-sheet-column-number/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int titleToNumber(char *columnTitle)
{
    int size = strlen(columnTitle) - 1, res = 0;
    long long pow = 1;
    for (int i = size; i >= 0; --i)
    {
        res = res + pow * (columnTitle[i] - 64);
        pow *= 26;
    }
    return res;
}

void test(char *s, int wanted)
{
    char *columnTitle = calloc(strlen(s), sizeof(char));
    strcpy(columnTitle, s);
    int actual = titleToNumber(columnTitle);
    if (actual != wanted)
    {
        printf("ERR: columnTitle = %s, wanted = %d but actual = %d\n", columnTitle, wanted, actual);
    }
}

int main()
{
    test("A", 1);
    test("AB", 28);
    test("ZY", 701);
    test("ABCD", 19010);
    test("FXSHRXW", 2147483647);
    return 0;
}