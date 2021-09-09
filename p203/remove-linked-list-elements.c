// https://leetcode.com/problems/remove-linked-list-elements/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* parent = malloc(sizeof(struct ListNode));
    parent->next = head;
    struct ListNode* run = parent;
    while(run->next != NULL) {
        if(run->next->val != val) {
            run = run->next;
        } else {
            run->next = run->next->next;
        }
    }
    head = parent->next;
    free(parent);
    return head;
}

void test(struct ListNode* head, int val, struct ListNode* wanted) {
    struct ListNode* actual = removeElements(head, val);
    assert_list_equal(wanted, actual);
}

int main() {
    test(make_list(7, 1, 2, 6, 3, 4, 5, 6), 6, make_list(5, 1, 2, 3, 4, 5));
    test(make_list(0), 1, make_list(0));
    test(make_list(4, 7, 7, 7, 7), 7, make_list(0));
    test(make_list(6, 10, 9, 10, 7, 10, 5), 10, make_list(3, 9, 7, 5));
    return 0;
}