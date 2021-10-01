.DEFAULT_GOAL: all
all: clean main
	./find-numbers-with-even-number-of-digits
clean:
	rm -fv find-numbers-with-even-number-of-digits
main:
	gcc -o find-numbers-with-even-number-of-digits find-numbers-with-even-number-of-digits.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-numbers-with-even-number-of-digits find-numbers-with-even-number-of-digits.c
	./find-numbers-with-even-number-of-digits
	gcov find-numbers-with-even-number-of-digits.c
rm:
	rm -fv find-numbers-with-even-number-of-digits
	rm -fv find-numbers-with-even-number-of-digits.gcno
	rm -fv find-numbers-with-even-number-of-digits.gcda
	rm -fv find-numbers-with-even-number-of-digits.c.gcov
	rm -fv array.h.gcov