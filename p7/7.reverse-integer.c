// https://leetcode.com/problems/reverse-integer/

int reverse(int x) {
    long long reverse_x = 0;
    while(x != 0) {
        reverse_x = reverse_x * 10 + x % 10;
        x /= 10;
    }
    if(reverse_x >= 2147483648 || reverse_x <= -2147483647) return 0;
    return reverse_x;
}
