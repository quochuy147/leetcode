.DEFAULT_GOAL: all
all: clean main
	./single-number
clean:
	rm -fv single-number
main:
	gcc -o single-number single-number.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o single-number single-number.c
	./single-number
	gcov single-number.c
rm:	
	rm -fv single-number
	rm -fv single-number.gcno
	rm -fv single-number.gcda
	rm -fv single-number.c.gcov
	rm -fv array.h.gcov