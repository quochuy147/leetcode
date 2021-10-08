.DEFAULT_GOAL: all
all: clean main
	./can-make-arithmetic-progression-from-sequence
clean:	
	rm -fv can-make-arithmetic-progression-from-sequence
main:
	gcc -o can-make-arithmetic-progression-from-sequence can-make-arithmetic-progression-from-sequence.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o can-make-arithmetic-progression-from-sequence can-make-arithmetic-progression-from-sequence.c
	./can-make-arithmetic-progression-from-sequence
	gcov can-make-arithmetic-progression-from-sequence.c
rm:
	rm -fv can-make-arithmetic-progression-from-sequence
	rm -fv can-make-arithmetic-progression-from-sequence.gcno
	rm -fv can-make-arithmetic-progression-from-sequence.gcda
	rm -fv can-make-arithmetic-progression-from-sequence.c.gcov
	rm -fv array.h.gcov