.DEFAULT_GOAL: all
all: clean main
	./convert-binary-number-in-a-linked-list-to-integer
clean:
	rm -fv convert-binary-number-in-a-linked-list-to-integer
main:
	gcc -o convert-binary-number-in-a-linked-list-to-integer convert-binary-number-in-a-linked-list-to-integer.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o convert-binary-number-in-a-linked-list-to-integer convert-binary-number-in-a-linked-list-to-integer.c
	./convert-binary-number-in-a-linked-list-to-integer
	gcov convert-binary-number-in-a-linked-list-to-integer.c
rm:
	rm -fv convert-binary-number-in-a-linked-list-to-integer
	rm -fv convert-binary-number-in-a-linked-list-to-integer.gcno
	rm -fv convert-binary-number-in-a-linked-list-to-integer.gcda
	rm -fv convert-binary-number-in-a-linked-list-to-integer.c.gcov
	rm -fv list.h.gcov