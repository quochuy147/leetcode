.DEFAULT_GOAL: all
all: clean main
	./swapping-nodes-in-a-linked-list
clean:
	rm -fv swapping-nodes-in-a-linked-list
main:
	gcc -o swapping-nodes-in-a-linked-list swapping-nodes-in-a-linked-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o swapping-nodes-in-a-linked-list swapping-nodes-in-a-linked-list.c
	./swapping-nodes-in-a-linked-list
	gcov swapping-nodes-in-a-linked-list.c
rm:
	rm -fv swapping-nodes-in-a-linked-list
	rm -fv swapping-nodes-in-a-linked-list.gcno
	rm -fv swapping-nodes-in-a-linked-list.gcda
	rm -fv swapping-nodes-in-a-linked-list.c.gcov
	rm -fv list.h.gcov