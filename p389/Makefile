.DEFAULT_GOAL: all
all: clean main
	./find-the-difference
clean:
	rm -fv find-the-difference
main:
	gcc -o find-the-difference find-the-difference.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-the-difference find-the-difference.c
	./find-the-difference
	gcov find-the-difference.c
rm:
	rm -fv find-the-difference
	rm -fv find-the-difference.gcno
	rm -fv find-the-difference.gcda
	rm -fv find-the-difference.c.gcov