// https://leetcode.com/problems/happy-number/

bool isHappy(int n) {
    int happy_number = n;
    while(happy_number > 4) {
        happy_number = 0;
        while(n > 0) {
            happy_number += (n % 10) * (n % 10);
            n /= 10;
        }
        n = happy_number;
    }
    if(happy_number == 1) return true;
    return false;
}