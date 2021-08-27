#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int gcd(int a, int b) {
    while(b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;   
}

bool hasGroupsSizeX(int* deck, int size) {   
    int group[10001] = {0}, end = 0;
    for(int i = 0; i < size; ++i) {
        group[deck[i]]++;
        //end = (end < deck[i]) ? deck[i] : end;
    }
    int res = group[deck[0]];
    for(int i = 0; i <= 10000; ++i) {
        res = (group[i] != 0) ? gcd(res, group[i]) : res;
    }
    return res >= 2 ? true : false; 
}

void test(int* deck, int size, bool wanted) {
    bool actual = hasGroupsSizeX(deck, size);
    if(actual != wanted) {
        printf("ERR : size array = %d, wanted = %s but actual = %s",
        size, wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test((int[]) {1}, 1, 0);
    test((int[]) {1, 1}, 2, 1);
    test((int[]) {1, 2, 3, 4, 4, 3, 2, 1}, 8, 1);
    test((int[]) {1, 1, 1, 2, 2, 2, 3, 3}, 8, 0);
    test((int[]) {1, 1, 2, 2, 2, 2}, 6, 1);
    test((int[]) {5, 2, 7, 9, 9, 9, 7, 7, 2, 2, 5, 5}, 12, 1);
    test((int[]) {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 10, 10, 10, 10}, 16, 1);

}