.DEFAULT_GOAL: all
all: clean main
	./count-good-triplets
clean:
	rm -fv count-good-triplets
main:
	gcc -o count-good-triplets count-good-triplets.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o count-good-triplets count-good-triplets.c
	./count-good-triplets
	gcov count-good-triplets.c
rm:
	rm -fv count-good-triplets
	rm -fv count-good-triplets.gcno
	rm -fv count-good-triplets.gcda
	rm -fv count-good-triplets.c.gcov
	rm -fv array.h.gcov