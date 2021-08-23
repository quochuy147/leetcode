#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long ll;

bool isPerfectSquare(int num) {
    if(num == 1) return true;
    int l = 1, r = num / 2;
    while(l <= r) {
        ll m = (l + r) / 2;
        if(m * m == num) {
            return true;
        }
        if(m * m < num) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return false;
}

void test(int num, bool wanted)
{
    int actual = isPerfectSquare(num);
    if(actual != wanted) {
        printf("number = %d, wanted = %s but actual = %s",
        num, wanted ? "true" : "false",  actual ? "true" : "false");
    }
}

int main()
{
    test(16, 1);
    test(14, 0);
    test(1, 1);
    test(81929412, 0);
    test(100000000, 1);
    test(2147483647, 0);
}