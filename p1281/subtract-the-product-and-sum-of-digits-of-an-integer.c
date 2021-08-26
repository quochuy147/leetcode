#include <stdio.h>
#include <stdlib.h>

int subtractProductAndSum(int n) {
    int mul = 1, sum = 0;
    while(n > 0) {
        int t = n % 10;
        n /= 10;
        mul *= t;
        sum += t;
    }
    return mul - sum;
}

void test(int n, int wanted) {
    int actual = subtractProductAndSum(n);
    if(actual != wanted) {
        printf("ERR : number = %d, wanted = %d but actual = %d", n, wanted, actual);
    }
}

int main()
{
    test(1, 0);
    test(123, 0);
    test(234, 15);
    test(4421, 21);
    test(1407, -12);
    test(99999, 59004);
    return 0;
}