// https://leetcode.com/problems/perfect-number/

int divisor(int num) {
    int sum = 0;
    for(int i = 1; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            if(i * i == num) sum += i;
            else sum += i + num / i;
        }
    }
    return sum - num;
}

bool checkPerfectNumber(int num) {
    if(divisor(num) == num) return true;
    return false;
}
