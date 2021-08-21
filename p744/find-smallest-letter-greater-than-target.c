#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nextGreatestLetter(char* letters, int size, char target){
    int l = 0, r = size - 1, res = 0;
    while(l <= r) {
        int m = (l + r) / 2;
        if(letters[m] > target) {
            r = m - 1;
            res = m;
        }
        else {
            l = m + 1;
        }
    }
    return letters[res];
}

void test(char* letters, int size, char target, char wanted) {
    char* str = calloc(size, sizeof(char));
    strcpy(str, letters);
    char actual = nextGreatestLetter(str, size, target);
    if(actual != wanted) {
        printf("ERR: letters = %s, size = %d, target = %c, wanted = %c but actual = %c",
        letters, size, target, wanted, actual);
    }
    free(str);
}

int main()
{
    test((char[]) {'c', 'f', 'j'}, 3, 'a', 'c');
    test((char[]) {'c', 'f', 'j'}, 3, 'c', 'f');
    test((char[]) {'c', 'f', 'j'}, 3, 'g', 'j');
    test((char[]) {'c', 'f', 'j'}, 3, 'j', 'c');
    test((char[]) {'a', 'd', 'g', 'i', 'k', 'm'}, 6, 'h', 'i');
}