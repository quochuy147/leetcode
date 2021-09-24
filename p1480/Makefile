.DEFAULT_GOAL: all
all: clean main
	./running-sum-of-1d-array
clean:
	rm -fv running-sum-of-1d-array
main:
	gcc -o running-sum-of-1d-array running-sum-of-1d-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o running-sum-of-1d-array running-sum-of-1d-array.c
	./running-sum-of-1d-array
	gcov running-sum-of-1d-array.c
rm:
	rm -fv running-sum-of-1d-array
	rm -fv running-sum-of-1d-array.gcno
	rm -fv running-sum-of-1d-array.gcda
	rm -fv running-sum-of-1d-array.c.gcov
	rm -fv array.h.gcov