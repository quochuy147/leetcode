// https://leetcode.com/problems/linked-list-components/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/list.h"

int numComponents(struct ListNode* head, int* nums, int size) {
    int arr[10001] = {0}, count = 0;
    for(int i = 0; i < size; ++i) {
        arr[nums[i]] = 1;
    }
    while(head != NULL) {
        if(arr[head->val] == 1) {
            count++;
        }
        while(head != NULL && arr[head->val] == 1) {
            head = head->next;
        }
        if(head == NULL) {
            break;
        }
        head = head->next;
    }
    return count;
}

void test(struct ListNode* head, int* nums, int size, int wanted) {
    int actual = numComponents(head, nums, size);
    if(actual != wanted) {
        printf("ERR:\nhead = ");
        print_list(head);
        printf("wanted = %d, but actual = %d\n", wanted, actual);
    }
}

int main() {
    test(make_list(4, 0, 1, 2, 3), (int[]) {0, 1, 3}, 3, 2);
    test(make_list(5, 0, 1, 2, 3, 4), (int[]) {0, 3, 1, 4}, 4, 2);
    test(make_list(4, 0, 1, 2, 3), (int[]) {3, 2, 1, 0}, 4, 1);
    test(make_list(7, 0, 1, 2, 3, 4, 5, 6), (int[]) {0, 1, 3, 4, 6}, 5, 3);
    return 0;
}