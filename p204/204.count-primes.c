// https://leetcode.com/problems/count-primes/

void sieve_of_Eratosthenes(int n, bool check[]) {
    for(int i = 2; i < sqrt(n); ++i) {
        if(check[i]) {
            for(int j = i * 2; j < n; j += i) {
                check[j] = false;
            }
        }
    }
}

int countPrimes(int n) {
    if(n < 2) return 0;
    int count = 0;
    bool check[n + 1];
    for(int i = 2; i <= n; ++i) check[i] = true;
    sieve_of_Eratosthenes(n, check);
    for(int i = 2; i < n; ++i) {
        if(check[i]) count++;
    }
    return count;
}
