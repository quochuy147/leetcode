.DEFAUT_GOAL: all
all: clean main
	./duplicate-zeros
clean:
	rm -fv duplicate-zeros
main:
	gcc -o duplicate-zeros duplicate-zeros.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o duplicate-zeros duplicate-zeros.c
	./duplicate-zeros
	gcov duplicate-zeros.c
rm:
	rm -fv duplicate-zeros
	rm -fv duplicate-zeros.gcno
	rm -fv duplicate-zeros.gcda
	rm -fv duplicate-zeros.c.gcov
	rm -fv array.h.gcov