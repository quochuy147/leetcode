.DEAFAULT_GOAL: all
all: clean main
	./contains-duplicate
clean:
	rm -fv contains-duplicate
main:
	gcc -o contains-duplicate contains-duplicate.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o contains-duplicate contains-duplicate.c
	./contains-duplicate
	gcov contains-duplicate.c
rm:
	rm -fv contains-duplicate
	rm -fv contains-duplicate.gcda
	rm -fv contains-duplicate.gcno
	rm -fv contains-duplicate.c.gcov