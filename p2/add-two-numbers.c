// https://leetcode.com/problems/add-two-numbers/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* new_node(int val) {
    struct ListNode* node = malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* sum = new_node(0);
    struct ListNode* head_sum = sum;
    int debt = 0;
    while(l1 != NULL || l2 != NULL) {
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;
        int s = x + y + debt;
        sum->next = new_node(s % 10);
        sum = sum->next;
        debt = s / 10;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    if(debt) {
        sum->next = new_node(1);
    }
    return head_sum->next;
}

void test(struct ListNode* l1, struct ListNode* l2, struct ListNode* wanted) {
    struct ListNode* actual = addTwoNumbers(l1, l2);
    assert_list_equal(wanted, actual);
}

int main() {
    test(make_list(1, 1), make_list(1, 9), make_list(2, 0, 1));
    test(make_list(3, 2, 4, 3), make_list(3, 5, 6, 4), make_list(3, 7, 0, 8));
    test(make_list(1, 0), make_list(1, 0), make_list(1, 0));
    test(make_list(7, 9, 9, 9, 9, 9, 9, 9), make_list(4, 9, 9, 9, 9), make_list(8, 8, 9, 9, 9, 0, 0, 0, 1));
    return 0;
}