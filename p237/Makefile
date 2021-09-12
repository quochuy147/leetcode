.DEFAULT_GOAL: all
all: clean main
	./delete-node-in-a-linked-list
clean:
	rm -fv delete-node-in-a-linked-list
main:
	gcc -o delete-node-in-a-linked-list delete-node-in-a-linked-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o delete-node-in-a-linked-list delete-node-in-a-linked-list.c
	./delete-node-in-a-linked-list
	gcov delete-node-in-a-linked-list.c
rm:
	rm -fv delete-node-in-a-linked-list
	rm -fv delete-node-in-a-linked-list.gcno
	rm -fv delete-node-in-a-linked-list.gcda
	rm -fv delete-node-in-a-linked-list.c.gcov
	rm -fv list.h.gcov