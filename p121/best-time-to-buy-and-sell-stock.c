// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "../lib/array.h"

int maxProfit(int* prices, int size) {
    int min = INT_MAX, res = 0;
    for(int i = 0; i < size; ++i) {
        min = min > prices[i] ? prices[i] : min;
        res = res < prices[i] - min ? prices[i] - min : res;
    }
    return res;
}

void test(int* prices, int size, int wanted) {
    int actual = maxProfit(prices, size);
    if(actual != wanted) {
        printf("ERR: prices = ");
        print_array(prices, size);
        printf("size = %d, wanted = %d but actual = %d\n", size, wanted, actual);

    }
}

int main() {
    test((int[]) {0}, 1, 0);
    test((int[]) {7, 1, 5, 3, 6, 4}, 6, 5);
    test((int[]) {1, 2, 3, 4, 5}, 5, 4);
    test((int[]) {5, 4, 3, 2, 1}, 5, 0);
    return 0;
}