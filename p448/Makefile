.DEFAULT_GOAL: all
all: clean main
	./find-all-numbers-disappeared-in-an-array
clean:
	rm -fv find-all-numbers-disappeared-in-an-array
main:
	gcc -o find-all-numbers-disappeared-in-an-array find-all-numbers-disappeared-in-an-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-all-numbers-disappeared-in-an-array find-all-numbers-disappeared-in-an-array.c
	./find-all-numbers-disappeared-in-an-array
	gcov find-all-numbers-disappeared-in-an-array.c
rm:
	rm -fv find-all-numbers-disappeared-in-an-array
	rm -fv find-all-numbers-disappeared-in-an-array.gcno
	rm -fv find-all-numbers-disappeared-in-an-array.gcda
	rm -fv find-all-numbers-disappeared-in-an-array.c.gcov
	rm -fv array.h.gcov