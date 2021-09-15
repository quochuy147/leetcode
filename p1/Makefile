.DEFAULT_GOAL: all
all: clean main
	./two-sum
clean:
	rm -fv two-sum
main:
	gcc -o two-sum two-sum.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o two-sum two-sum.c
	./two-sum
	gcov two-sum.c
rm:
	rm -fv two-sum
	rm -fv two-sum.gcno
	rm -fv two-sum.gcda
	rm -fv two-sum.c.gcov
	rm -fv array.h.gcov