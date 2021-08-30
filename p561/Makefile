.DEAFAULT_GOAL: all
all: clean main
	./array-partition-i
clean:
	rm -fv array-partition-i
main:
	gcc -o array-partition-i array-partition-i.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o array-partition-i array-partition-i.c
	./array-partition-i
	gcov array-partition-i.c
rm:
	rm -fv array-partition-i
	rm -fv array-partition-i.gcno
	rm -fv array-partition-i.gcda
	rm -fv array-partition-i.c.gcov