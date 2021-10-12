.DEFAULT_GOAL: all
all: clean main
	./single-number-ii
clean:	
	rm -fv single-number-ii
main:
	gcc -o single-number-ii single-number-ii.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o single-number-ii single-number-ii.c
	./single-number-ii
	gcov single-number-ii.c
rm:
	rm -fv single-number-ii
	rm -fv single-number-ii.gcno
	rm -fv single-number-ii.gcda
	rm -fv single-number-ii.c.gcov
	rm -fv array.h.gcov