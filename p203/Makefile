.DEFAULT_GOAL: all
all: clean main
	./remove-linked-list-elements
clean:
	rm -fv remove-linked-list-elements
main:
	gcc -o remove-linked-list-elements remove-linked-list-elements.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o remove-linked-list-elements remove-linked-list-elements.c
	./remove-linked-list-elements
	gcov remove-linked-list-elements.c
rm:
	rm -fv remove-linked-list-elements
	rm -fv remove-linked-list-elements.gcno
	rm -fv remove-linked-list-elements.gcda
	rm -fv remove-linked-list-elements.c.gcov
	rm -fv list.h.gcov