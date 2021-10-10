// https://leetcode.com/problems/binary-tree-inorder-traversal/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/tree.h"
#include "../lib/array.h"

void indorder(struct TreeNode* root, int* res, int* returnSize) {
    if(!root) {
        return;
    }
    indorder(root->left, res, returnSize);
    res[(*returnSize)++] = root->val;
    indorder(root->right, res, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize = 0;
    int* res = malloc(101 * sizeof(struct TreeNode));
    indorder(root, res, returnSize);
    return res;
}

void test(struct TreeNode* root, int* wanted, int wanted_size) {
    int* returnSize = malloc(sizeof(int));
    int* actual = inorderTraversal(root, returnSize);
    int actual_size = *returnSize;
    assert_array_equal(wanted, wanted_size, actual, actual_size);
}

int main() {
    test(make_tree((Ints) {
        .size = 4,
        .values = (int[]) {1, NA, 2, 3}}),
    (int[]) {1, 3, 2}, 3);
    test(make_tree((Ints) {
        .size = 0,
        .values = (int[]) {}}),
    (int[]) {}, 0);
    test(make_tree((Ints) {
        .size = 3,
        .values = (int[]) {1, NA, 2}}),
    (int[]) {1, 2}, 2);
    return 0;
}