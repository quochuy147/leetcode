//https://leetcode.com/problems/swap-nodes-in-pairs/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode *swapPairs(struct ListNode *head)
{
    struct ListNode *run = head;
    while (run != NULL && run->next != NULL)
    {
        int tmp = run->val;
        run->val = run->next->val;
        run->next->val = tmp;
        run = run->next->next;
    }
    return head;
}

void test(struct ListNode *head, struct ListNode* wanted)
{
    struct ListNode* actual = swapPairs(head);
    assert_list_equal(wanted, actual);
}

int main()
{
    test(make_list(0), make_list(0));
    test(make_list(4, 1, 2, 3, 4), make_list(4, 2, 1, 4, 3));
    test(make_list(1, 1), make_list(1, 1));
    test(make_list(7, 3, 5, 7, 9, 11, 13, 15), make_list(7, 5, 3, 9, 7, 13, 11, 15));
    return 0;
}