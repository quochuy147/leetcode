// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

int getDecimalValue(struct ListNode* head){
    int dec = 0;
    while(head != NULL) {
        dec = dec * 2 + head->val;
        head = head->next;
    }
    return dec;
}

void test(struct ListNode* head, int wanted) {
    int actual = getDecimalValue(head);
    if(actual != wanted) {
        printf("ERR: head = ");
        print_list(head);
        printf("wanted = %d but actual = %d", wanted, actual);
    }
}

int main() {
    test(make_list(3, 1, 0, 1), 5);
    test(make_list(1, 0), 0);
    test(make_list(1, 1), 1);
    test(make_list(15, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0), 18880);
    test(make_list(2, 0, 0), 0);
    return 0;
}