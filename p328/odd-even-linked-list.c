// https://leetcode.com/problems/odd-even-linked-list/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* oddEvenList(struct ListNode* head) {
    if(head == NULL) {
        return NULL;
    }
    struct ListNode* odd = head;
    struct ListNode* even = head->next;
    struct ListNode* behind_odd = even;
    while(even != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = behind_odd;
    return head;
}

void test(struct ListNode* head, struct ListNode* wanted) {
    struct ListNode* actual = oddEvenList(head);
    assert_list_equal(wanted, actual);
}

int main() {
    test(make_list(0), make_list(0));
    test(make_list(5, 1, 2, 3, 4, 5), make_list(5, 1, 3, 5, 2, 4));
    test(make_list(6, 1, 2, 3, 4, 5, 6), make_list(6, 1, 3, 5, 2, 4, 6));
    test(make_list(6, 2, 1, 3, 5, 6, 4, 7), make_list(6, 2, 3, 6, 1, 5, 4));
    test(make_list(8, 0, 1, 2, 3, 4, 5, 6, 7), make_list(8, 0, 2, 4, 6, 1, 3, 5, 7));
    return 0;
}