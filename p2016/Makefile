.DEFAULT_GOAL: all
all: clean main
	./maximum-difference-between-increasing-elements
clean:
	rm -fv maximum-difference-between-increasing-elements
main:
	gcc -o maximum-difference-between-increasing-elements maximum-difference-between-increasing-elements.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o maximum-difference-between-increasing-elements maximum-difference-between-increasing-elements.c
	./maximum-difference-between-increasing-elements
	gcov maximum-difference-between-increasing-elements.c
rm:
	rm -fv maximum-difference-between-increasing-elements
	rm -fv maximum-difference-between-increasing-elements.gcno
	rm -fv maximum-difference-between-increasing-elements.gcda
	rm -fv maximum-difference-between-increasing-elements.c.gcov
	rm -fv array.h.gcov