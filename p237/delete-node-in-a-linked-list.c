// https://leetcode.com/problems/delete-node-in-a-linked-list/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

void deleteNode(struct ListNode* node) {
    struct ListNode* cur = node;
    node->val = cur->next->val;
    node->next = cur->next->next;
}

void test(struct ListNode* head, int val, struct ListNode* wanted) {
    struct ListNode* node = search_list(head, val);
    deleteNode(node);
    struct ListNode* actual = head;
    assert_list_equal(wanted, actual);
}

int main() { 
    test(make_list(4, 4, 5, 1, 9), 5, make_list(3, 4, 1, 9));
    test(make_list(4, 4, 5, 1, 9), 1, make_list(3, 4, 5, 9));
    test(make_list(4, 1, 2, 3, 4), 3, make_list(3, 1, 2, 4));
    test(make_list(2, 0, 1), 0, make_list(1, 1));
    test(make_list(3, -3, 5, -99), -3, make_list(2, 5, -99));
    return 0;
}