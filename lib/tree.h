#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define NA INT_MIN

#define debug(x) \
    printf("\x1b[1;36m[DEBUG]\x1b[0m %s:%d " #x " = %d\n", __FILE__, __LINE__, (x))

#define error(fmt, ...) \
    _log("\x1b[1;31m[ERROR]\x1b[0m %s:%d " fmt, __FILE__, __LINE__, __VA_ARGS__)

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode *Tree;

typedef struct Ints_ {
    int size;
    int *values;
} Ints;

Tree make_tree(Ints arr);

Tree tree_node_new(int val);

Ints tree_collect_level_order(Tree root, bool withNA);

char *tree_str(Tree root);

void tree_print(Tree root);

bool assert_tree_equal(Tree a, Tree b);

void _log(const char *fmt, ...);
