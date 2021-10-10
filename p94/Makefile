.DEFAULT_GOAL: all
all: clean main
	./binary-tree-inorder-traversal
clean:	
	rm -fv binary-tree-inorder-traversal
main:
	gcc -o binary-tree-inorder-traversal binary-tree-inorder-traversal.c ../lib/tree.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o binary-tree-inorder-traversal binary-tree-inorder-traversal.c ../lib/tree.c
	./binary-tree-inorder-traversal
	gcov binary-tree-inorder-traversal.c
rm:	
	rm -fv binary-tree-inorder-traversal
	rm -fv binary-tree-inorder-traversal.gcno
	rm -fv binary-tree-inorder-traversal.gcda
	rm -fv binary-tree-inorder-traversal.c.gcov
	rm -fv array.h.gcov
	rm -fv tree.gcda
	rm -fv tree.gcno
	rm -fv tree.h.gcov