.DEFAULT_GOAL: all
all: clean main
	./sum-of-unique-elements
clean:	
	rm -fv sum-of-unique-elements
main:
	gcc -o sum-of-unique-elements sum-of-unique-elements.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o sum-of-unique-elements sum-of-unique-elements.c
	./sum-of-unique-elements
	gcov sum-of-unique-elements.c
rm:
	rm -fv sum-of-unique-elements
	rm -fv sum-of-unique-elements.gcno
	rm -fv sum-of-unique-elements.gcda
	rm -fv sum-of-unique-elements.c.gcov
	rm -fv array.h.gcov