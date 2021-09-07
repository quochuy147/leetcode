//https://leetcode.com/problems/powx-n/
// Using divide and conquer algorithm to solve this problem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double x, long n) {
    if (n == 1) {
        return x;
    }
    double tmp = power(x, n / 2);
    if (n % 2 == 1) {
        return tmp * tmp * x;
    } else {
        return tmp * tmp;
    }
}

double myPow(double x, long n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    double res = power(x, n);
    return res;
}

void test(double x, int n, double wanted) {
    double actual = myPow(x, n);
    actual = roundf(x * 1e5) / 1e5;
    wanted = roundf(x * 1e5) / 1e5;
    if(actual != wanted) {
        printf("ERR : x = %.5f, n = %d, wanted = %.5f but actual = %.5f\n", x, n, wanted, actual);
    }
}

int main() {
    test(2.00000, 10, 1024.0000);
    test(3.00000, 0, 0.00000);
    test(2.10000, 3, 9.26100);
    test(2.00000, -2, 0.25000);
    test(1, -2147483647, 1.00000);
    test(5.19348, 5, 3778.26415);
    return 0;
}