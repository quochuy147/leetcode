.DEFAULT_GOAL: all
all: clean main
	./palindrome-linked-list
clean:
	rm -fv palindrome-linked-list
main:
	gcc -o palindrome-linked-list palindrome-linked-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o palindrome-linked-list palindrome-linked-list.c
	./palindrome-linked-list
	gcov palindrome-linked-list.c
rm:
	rm -fv palindrome-linked-list
	rm -fv palindrome-linked-list.gcno
	rm -fv palindrome-linked-list.gcda
	rm -fv palindrome-linked-list.c.gcov
	rm -fv list.h.gcov