.DEFAULT_GOAL: all
all: clean main
	./reverse-linked-list
clean:
	rm -fv reverse-linked-list
main:
	gcc -o reverse-linked-list reverse-linked-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o reverse-linked-list reverse-linked-list.c
	./reverse-linked-list
	gcov reverse-linked-list.c
rm:
	rm -fv reverse-linked-list
	rm -fv reverse-linked-list.gcno
	rm -fv reverse-linked-list.gcda
	rm -fv reverse-linked-list.c.gcov
	rm -fv list.h.gcov