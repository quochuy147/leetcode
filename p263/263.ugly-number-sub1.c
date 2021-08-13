// https://leetcode.com/problems/ugly-number/

bool isUgly(int n) {
    if(n < -2147483648 || n > 2147483647) return false;
    if(n <= 0) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        while(n % i == 0) {
            if(i > 5) return false;
            n /= i;
        }
    }
    if(n > 5) return false;
    return true;
}
