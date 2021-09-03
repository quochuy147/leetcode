#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* rev = NULL;
    struct ListNode* tmp = NULL;
    while(head != NULL) {
        tmp = head->next;
        head->next = rev;
        rev = head;
        head = tmp;
    }
    return rev;
}

void test(struct ListNode* head, struct ListNode* wanted) {
    struct ListNode* actual = reverseList(head);
    assert_list_equal(wanted, actual);
}

int main()
{
    test(makeList(5, 1, 2, 3, 4, 5), makeList(5, 5, 4, 3, 2, 1));
    test(makeList(2, 1, 2), makeList(2, 2, 1));
    test(makeList(6, 2, 4, 1, 5, 10, 4), makeList(6, 4, 10, 5, 1, 4, 2, 6));
    test(makeList(0), makeList(0));
    return 0;
}