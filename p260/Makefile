.DEFAULT_GOAL: all
all: clean main
	./single-number-iii
clean:
	rm -fv single-number-iii
main:
	gcc -o single-number-iii single-number-iii.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o single-number-iii single-number-iii.c
	./single-number-iii
	gcov single-number-iii.c
rm:
	rm -fv single-number-iii
	rm -fv single-number-iii.gcno
	rm -fv single-number-iii.gcda
	rm -fv single-number-iii.c.gcov
	rm -fv array.h.gcov