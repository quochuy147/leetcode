.DEFAULT_GOAL: all
all: clean main
	./middle-of-the-linked-list
clean:
	rm -fv middle-of-the-linked-list
main:
	gcc -o middle-of-the-linked-list middle-of-the-linked-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o middle-of-the-linked-list middle-of-the-linked-list.c
	./middle-of-the-linked-list
	gcov middle-of-the-linked-list
rm:
	rm -fv middle-of-the-linked-list
	rm -fv middle-of-the-linked-list.gcno
	rm -fv middle-of-the-linked-list.gcda
	rm -fv middle-of-the-linked-list.c.gcov
	rm -fv list.h.gcov