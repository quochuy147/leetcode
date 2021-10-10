.DEFAULT_GOAL: all
all: clean main
	./binary-tree-preorder-traversal
clean:
	rm -fv binary-tree-preorder-traversal
main:	
	gcc -o binary-tree-preorder-traversal binary-tree-preorder-traversal.c ../lib/tree.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o binary-tree-preorder-traversal binary-tree-preorder-traversal.c ../lib/tree.c
	./binary-tree-preorder-traversal
	gcov binary-tree-preorder-traversal.c
rm:
	rm -fv binary-tree-preorder-traversal
	rm -fv binary-tree-preorder-traversal.gcno
	rm -fv binary-tree-preorder-traversal.gcda
	rm -fv binary-tree-preorder-traversal.c.gcov
	rm -fv array.h.gcov
	rm -fv tree.gcno
	rm -fv tree.gcda
	rm -fv tree.c.gcov