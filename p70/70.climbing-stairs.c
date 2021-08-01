// https://leetcode.com/problems/climbing-stairs

int climbStairs(int n) {
    int a, b, c;
    a = b = 1;
    for(int i = 0; i < n - 1; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
