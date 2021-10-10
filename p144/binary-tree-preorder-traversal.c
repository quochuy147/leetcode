// https://leetcode.com/problems/binary-tree-preorder-traversal/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/array.h"
#include "../lib/tree.h"

void preorder(struct TreeNode* root, int* res, int* returnSize) {
    if(root == NULL) {
        return ;
    }
    res[(*returnSize)++] = root->val;
    preorder(root->left, res, returnSize);
    preorder(root->right, res, returnSize);   
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* res = malloc(101 * sizeof(int));
    preorder(root, res, returnSize);    
    return res;
}

void test(struct TreeNode* root, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = preorderTraversal(root, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test(make_tree((Ints) {
        .size = 4,
        .values = (int[]) {1, NA, 2, 3}}),
    (int[]) {1, 2, 3}, 3);
    test(make_tree((Ints) {
        .size = 3,
        .values = (int[]) {1, NA, 2}}),
    (int[]) {1, 2}, 2);
    test(make_tree((Ints) {
        .size = 0,
        .values = (int[]) {}}),
    (int[]) {}, 0);
    return 0;
}