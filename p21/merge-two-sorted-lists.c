// https://leetcode.com/problems/merge-two-sorted-lists/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL) {
        return l2;
    }
    if(l2 == NULL) {
        return l1;
    }
    struct ListNode* cur = malloc(sizeof(struct ListNode));
    struct ListNode* merge = cur;
    while(l1 != NULL && l2 != NULL) {
        if(l1->val <= l2->val) {
            cur->next = l1;
            l1 = l1->next;
        }
        else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    while(l1 != NULL) {
        cur->next = l1;
        l1 = l1->next;
        cur = cur->next;
    }
    while(l2 != NULL) {
        cur->next = l2;
        l2 = l2->next;
        cur = cur->next;
    }
    merge = merge->next;
    return merge;
}

void test(struct ListNode* l1, struct ListNode* l2, struct ListNode* wanted) {
    struct ListNode* actual = mergeTwoLists(l1, l2);
    assert_list_equal(wanted, actual);
}

int main()
{
    test(make_list(3, 1, 2, 3), make_list(3, 1, 3, 4), make_list(6, 1, 1, 2, 3, 3, 4));
    test(make_list(0), make_list(0), make_list(0));
    test(make_list(0), make_list(1, 1), make_list(1, 1));
    test(make_list(1, 1), make_list(0), make_list(1, 1));
    test(make_list(5, -100, -50, -20, 0, 100),
    make_list(6, -90, -70, -10, 10, 50, 90),
    make_list(11, -100, -90, -70, -50, -20, -10, 0, 10, 50, 90, 100));
    return 0;
}