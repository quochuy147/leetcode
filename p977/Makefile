.DEFAULT_GOAL: all
all: clean main
	./squares-of-a-sorted-array
clean:
	rm -fv squares-of-a-sorted-array
main:
	gcc -o squares-of-a-sorted-array squares-of-a-sorted-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o squares-of-a-sorted-array squares-of-a-sorted-array.c
	./squares-of-a-sorted-array
	gcov squares-of-a-sorted-array.c
rm:
	rm -fv squares-of-a-sorted-array
	rm -fv squares-of-a-sorted-array.gcno
	rm -fv squares-of-a-sorted-array.gcda
	rm -fv squares-of-a-sorted-array.c.gcov
	rm -fv array.h.gcov