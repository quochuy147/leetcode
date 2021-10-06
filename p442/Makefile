.DEFAULT_GOAL: all
all: clean main
	./find-all-duplicates-in-an-array
clean:
	rm -fv find-all-duplicates-in-an-array
main:
	gcc -o find-all-duplicates-in-an-array find-all-duplicates-in-an-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-all-duplicates-in-an-array find-all-duplicates-in-an-array.c
	./find-all-duplicates-in-an-array
	gcov find-all-duplicates-in-an-array.c
rm:
	rm -fv find-all-duplicates-in-an-array
	rm -fv find-all-duplicates-in-an-array.gcno
	rm -fv find-all-duplicates-in-an-array.gcda
	rm -fv find-all-duplicates-in-an-array.c.gcov
	rm -fv array.h.gcov