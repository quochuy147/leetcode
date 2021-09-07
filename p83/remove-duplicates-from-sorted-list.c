// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* run = head;
    while(run != NULL && run->next != NULL) {
        if(run->val != run->next->val) {
            run = run->next;
        } else {
            run->next = run->next->next;
        }
    } 
    return head;
}

void test(struct ListNode* head, struct ListNode* wanted) {
    struct ListNode* actual = deleteDuplicates(head);
    assert_list_equal(wanted, actual);
}   

int main() {
    test(make_list(3, 1, 1, 2), make_list(2, 1, 2));
    test(make_list(5, 1, 1, 2, 3, 3), make_list(3, 1, 2, 3));
    test(make_list(0), make_list(0));
    test(make_list(5, -100, -100, -20, -20, 0), make_list(3, -100, -20, 0));
    return 0;
}