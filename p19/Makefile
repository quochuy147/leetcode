.DEFAULT_GOAL: all
all: clean main
	./remove-nth-node-from-end-of-list
clean:
	rm -fv remove-nth-node-from-end-of-list
main:
	gcc -o remove-nth-node-from-end-of-list remove-nth-node-from-end-of-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o remove-nth-node-from-end-of-list remove-nth-node-from-end-of-list.c
	./remove-nth-node-from-end-of-list
	gcov remove-nth-node-from-end-of-list.c
rm:
	rm -fv remove-nth-node-from-end-of-list
	rm -fv remove-nth-node-from-end-of-list.gcno
	rm -fv remove-nth-node-from-end-of-list.gcda
	rm -fv remove-nth-node-from-end-of-list.c.gcov
	rm -fv list.h.gcov