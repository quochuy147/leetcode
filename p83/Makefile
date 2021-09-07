.DEFAULT_GOAL: all
all: clean main
	./remove-duplicates-from-sorted-list
clean:
	rm -fv remove-duplicates-from-sorted-list
main:
	gcc -o remove-duplicates-from-sorted-list remove-duplicates-from-sorted-list.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o remove-duplicates-from-sorted-list remove-duplicates-from-sorted-list.c
	./remove-duplicates-from-sorted-list
	gcov remove-duplicates-from-sorted-list.c
rm:
	rm -fv remove-duplicates-from-sorted-list
	rm -fv remove-duplicates-from-sorted-list.gcno
	rm -fv remove-duplicates-from-sorted-list.gcda
	rm -fv remove-duplicates-from-sorted-list.c.gcov
	rm -fv list.h.gcov