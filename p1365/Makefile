.DEFAULT_GOAL: all
all: clean main
	./how-many-numbers-are-smaller-than-the-current-number
clean:
	rm -fv how-many-numbers-are-smaller-than-the-current-number
main:
	gcc -o how-many-numbers-are-smaller-than-the-current-number how-many-numbers-are-smaller-than-the-current-number.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o how-many-numbers-are-smaller-than-the-current-number how-many-numbers-are-smaller-than-the-current-number.c
	./how-many-numbers-are-smaller-than-the-current-number
	gcov how-many-numbers-are-smaller-than-the-current-number.c
rm:
	rm -fv how-many-numbers-are-smaller-than-the-current-number
	rm -fv how-many-numbers-are-smaller-than-the-current-number.gcno
	rm -fv how-many-numbers-are-smaller-than-the-current-number.gcda
	rm -fv how-many-numbers-are-smaller-than-the-current-number.c.gcov
	rm -fv array.h.gcov