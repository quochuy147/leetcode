// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* parent = malloc(sizeof(struct ListNode));
    parent->next = head;
    struct ListNode* fast = parent;
    struct ListNode* slow = parent;
    for(int i = 0; i < n; ++i) {
        fast = fast->next;
    }
    while(fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    head = parent->next;
    free(parent);
    return head;
}

void test(struct ListNode* head, int n, struct ListNode* wanted) {
    struct ListNode* actual = removeNthFromEnd(head, n);
    assert_list_equal(wanted, actual);
}

int main() {
    test(make_list(5, 1, 2, 3, 4, 5), 2, make_list(4, 1, 2, 3, 5));
    test(make_list(1, 1), 1, make_list(0));
    test(make_list(2, 1, 2), 1, make_list(1, 1));
    test(make_list(4, 2, 3, 4, 5), 1, make_list(3, 2, 3, 4));
    test(make_list(5, 1, 2, 3, 4, 5), 5, make_list(4, 2, 3, 4, 5));
    return 0;
}