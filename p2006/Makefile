.DEFAULT_GOAL: all
all: clean main
	./count-number-of-pairs-with-absolute-difference-k
clean:
	rm -fv count-number-of-pairs-with-absolute-difference-k
main:
	gcc -o count-number-of-pairs-with-absolute-difference-k count-number-of-pairs-with-absolute-difference-k.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o count-number-of-pairs-with-absolute-difference-k count-number-of-pairs-with-absolute-difference-k.c
	./count-number-of-pairs-with-absolute-difference-k
	gcov count-number-of-pairs-with-absolute-difference-k.c
rm:
	rm -fv count-number-of-pairs-with-absolute-difference-k
	rm -fv count-number-of-pairs-with-absolute-difference-k.gcno
	rm -fv count-number-of-pairs-with-absolute-difference-k.gcda
	rm -fv count-number-of-pairs-with-absolute-difference-k.c.gcov
	rm -fv array.h.gcov