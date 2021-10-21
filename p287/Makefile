.DEFAULT_GOAL: all
all: clean main
	./find-the-duplicate-number
clean:
	rm -fv find-the-duplicate-number
main:
	gcc -o find-the-duplicate-number find-the-duplicate-number.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-the-duplicate-number find-the-duplicate-number.c
	./find-the-duplicate-number
	gcov find-the-duplicate-number.c
rm:	
	rm -fv find-the-duplicate-number
	rm -fv find-the-duplicate-number.gcno
	rm -fv find-the-duplicate-number.gcda
	rm -fv find-the-duplicate-number.c.gcov
	rm -fv array.h.gcov