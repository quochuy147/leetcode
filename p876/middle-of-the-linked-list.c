// https://leetcode.com/problems/middle-of-the-linked-list/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fast = head;
    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        head = head->next;
    }
    return head;
}

void test(struct ListNode* head, struct ListNode* wanted) {
    struct ListNode* actual = middleNode(head);
    assert_list_equal(wanted, actual);
}

int main() {
    test(make_list(1, 1), make_list(1, 1));
    test(make_list(2, 1, 2), make_list(1, 2));
    test(make_list(5, 1, 2, 3, 4, 5), make_list(3, 3, 4, 5));
    test(make_list(6, 1, 2, 3, 4, 5, 6), make_list(3, 4, 5, 6));
    return 0;
}