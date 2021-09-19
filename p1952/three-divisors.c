// https://leetcode.com/problems/three-divisors/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isThree(int n){
    int count = 0;
    for(int i = 1; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            count++;
            count = i * i == n ? count : count + 1;
        }
        if(count > 3) {
            return false;
        }
    }
    return count == 3 ? true : false;
}

void test(int n, bool wanted) {
    bool actual = isThree(n);
    if(actual != wanted) {
        printf("ERR: n = %d, wanted = %s but actual = %s\n",
        n, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test(2, false);
    test(4, true);
    test(49, true);
    test(10000, false);
    return 0;
}