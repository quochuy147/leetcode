.DEFAULT_GOAL: all
all: clean main
	./maximum-swap
clean:
	rm -fv maximum-swap
main:
	gcc -o maximum-swap maximum-swap.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o maximum-swap maximum-swap.c
	./maximum-swap
	gcov maximum-swap.c
rm:
	rm -fv maximum-swap
	rm -fv maximum-swap.gcno
	rm -fv maximum-swap.gcda
	rm -fv maximum-swap.c.gcov