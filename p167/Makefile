.DEFAULT_GOAL: all
all: clean main
	./two-sum-ii-input-array-is-sorted
clean:
	rm -fv two-sum-ii-input-array-is-sorted
main:
	gcc -o two-sum-ii-input-array-is-sorted two-sum-ii-input-array-is-sorted.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o two-sum-ii-input-array-is-sorted two-sum-ii-input-array-is-sorted.c
	./two-sum-ii-input-array-is-sorted
	gcov two-sum-ii-input-array-is-sorted.c
rm:
	rm -fv two-sum-ii-input-array-is-sorted
	rm -fv two-sum-ii-input-array-is-sorted.gcno
	rm -fv two-sum-ii-input-array-is-sorted.gcda
	rm -fv two-sum-ii-input-array-is-sorted.c.gcov
	rm -fv array.h.gcov