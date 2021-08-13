// https://leetcode.com/problems/ugly-number/

bool isUgly(int n) {
    if(n <= -2147483648 || n >= 2147483647) return false;
    if(n <= 0) return false;
    while(n != 1) {
        bool check = false;
        while(n % 2 == 0) {
            n /= 2;
            check = true;
        }
        while(n % 3 == 0) {
            n /= 3;
            check = true;
        }
        while(n % 5 == 0) {
            n /= 5;
            check = true;
        }
        if(check == false) return false;
    }
    return true;
}
