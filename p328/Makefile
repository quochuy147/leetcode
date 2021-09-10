.DEFAULT_GOAL: all
all: clean main
	./odd-even-linked-list
clean:
	rm -fv odd-even-linked-list
main:
	gcc -o odd-even-linked-list odd-even-linked-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o odd-even-linked-list odd-even-linked-list.c
	./odd-even-linked-list
	gcov odd-even-linked-list.c
rm:
	rm -fv odd-even-linked-list
	rm -fv odd-even-linked-list.gcno
	rm -fv odd-even-linked-list.gcda
	rm -fv odd-even-linked-list.c.gcov
	rm -fv list.h.gcov