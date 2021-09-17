// https://leetcode.com/problems/sqrtx/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mySqrt(int x) {
    int l = 0, r = round((double)x / 2), res = 0;
    while(l <= r) {
        long long m = (l + r) / 2;
        if(m * m <= x) {
            res = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}

void test(int x, int wanted) {
    int actual = mySqrt(x);
    if(actual != wanted) {
        printf("ERR: x = %d, wanted = %d but actual = %d\n", x, wanted, actual);
    }
}

int main() {
    test(0, 0);
    test(1, 1);
    test(4, 2);
    test(8, 2);
    test(2147483647, 46340);
    return 0;
}