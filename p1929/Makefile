.DEFAULT_GOAL: all
all: clean main
	./concatenation-of-array
clean:
	rm -fv concatenation-of-array
main:
	gcc -o concatenation-of-array concatenation-of-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o concatenation-of-array concatenation-of-array.c
	./concatenation-of-array
	gcov concatenation-of-array.c
rm:
	rm -fv concatenation-of-array
	rm -fv concatenation-of-array.gcno
	rm -fv concatenation-of-array.gcda
	rm -fv concatenation-of-array.c.gcov
	rm -fv array.h.gcov