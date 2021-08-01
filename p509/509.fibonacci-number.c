// https://leetcode.com/problems/fibonacci-number/

int fib(int n){
    int a, b, c;
    a = b = 1;
    for(int i = 0; i < n - 2; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    if(n == 0) return 0;
    return b;
}
