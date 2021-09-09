// https://leetcode.com/problems/palindrome-linked-list/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../lib/list.h"

bool isPalindrome(struct ListNode* head) {
    int a[100001], end = 0;
    struct ListNode* run = head;
    while(run != NULL) {
        a[end++] = run->val;
        run = run->next;
    }
    for(int i = end - 1; i >= 0; --i) {
        if(a[i] != head->val) {
            return false;
        } 
        head = head->next;
    }
    return true;
}

void test(struct ListNode* head, bool wanted) {
    bool actual = isPalindrome(head);
    if(actual != wanted) {
        printf("ERR :\nhead = ");
        print_list(head);
        printf("wanted = %s but actual = %s", wanted ? "true" : "false", actual ? "true" : "false");
    }
}

int main() {
    test(make_list(4, 1, 2, 2, 1), true);
    test(make_list(2, 1, 2), false);
    test(make_list(1, 1), true);
    test(make_list(6, 1, 2, 3, 1, 2, 3), false);
    return 0;
}