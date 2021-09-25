// https://leetcode.com/problems/prime-arrangements/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long ll;
const int MOD = 1e9 + 7;

bool check_prime_number(int n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

ll factorial(int n) {
    ll s = 1;
    for(int i = 1; i <= n; ++i) {
        s = s % MOD * i % MOD;
    }
    return s % MOD;
}

int numPrimeArrangements(int n) {
    int numbers = 0, prime_numbers = 0;
    for(int i = 1; i <= n; ++i) {
        if(check_prime_number(i)) {
            prime_numbers++;
        } else {
            numbers++;
        }
    }
    return (factorial(numbers) % MOD * factorial(prime_numbers) % MOD) % MOD;
}

void test(int n, int wanted) {
    int actual = numPrimeArrangements(n);
    if(actual != wanted) {
        printf("ERR: n = %d, wanted = %d but actual = %d\n", n, wanted, actual);
    }
}

int main() {
    test(5, 12);
    test(10, 17280);
    test(40, 965722612);
    test(87, 938893256);
    test(100, 682289015);
    return 0;
}