// https://leetcode.com/problems/arranging-coins/

#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int arrangeCoins(int n) {
    ll l = 1, r = n;
    while(l <= r) {
        ll m = (l + r) / 2;
        if(m * (m + 1) / 2 <= n) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return r;
}


void test(int n, int wanted) {
    int actual = arrangeCoins(n);
    if(actual != wanted) {
        printf("ERR: n = %d, wanted = %d but actual = %d\n", n, wanted, actual);
    }
}

int main() {
    test(1, 1);
    test(5, 2);
    test(8, 3);
    test(55, 10);
    test(2147483647, 65535);
    return 0;
}