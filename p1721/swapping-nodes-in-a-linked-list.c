// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode *swapNodes(struct ListNode *head, int k) {
    struct ListNode *run = head, *first, *second = head;
    int count = 0;
    for(int i = 1; i < k; ++i) {
        run = run->next;
    }
    first = run;
    while(run->next != NULL) {
        second = second->next;
        run = run->next;
    }
    int tmp = first->val;
    first->val = second->val;
    second->val = tmp;
    return head;
}

void test(struct ListNode *head, int k, struct ListNode *wanted) {
    struct ListNode *actual = swapNodes(head, k);
    assert_list_equal(wanted, actual);
}

int main() {
    test(make_list(5, 1, 2, 3, 4, 5), 2, make_list(5, 1, 4, 3, 2, 5));
    test(make_list(1, 1), 1, make_list(1, 1));
    test(make_list(2, 1, 2), 1, make_list(2, 2, 1));
    test(make_list(3, 1, 2, 3), 2, make_list(3, 1, 2, 3));
    test(make_list(10, 7, 9, 6, 6, 7, 8, 3, 0, 9, 5), 5, make_list(10, 7, 9, 6, 6, 8, 7, 3, 0, 9, 5));
    return 0;
}