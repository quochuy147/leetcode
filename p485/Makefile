.DEFAULT_GOAL: all
all: clean main
	./max-consecutive-ones
clean:
	rm -fv max-consecutive-ones
main:
	gcc -o max-consecutive-ones max-consecutive-ones.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o max-consecutive-ones max-consecutive-ones.c
	./max-consecutive-ones
	gcov max-consecutive-ones.c
rm:
	rm -fv max-consecutive-ones
	rm -fv max-consecutive-ones.gcno
	rm -fv max-consecutive-ones.gcda
	rm -fv max-consecutive-ones.c.gcov
	rm -fv array.h.gcov