.DEFAULT_GOAL: all
all: clean main
	./valid-perfect-square
clean:
	rm -fv valid-perfect-square
main:
	gcc -o valid-perfect-square valid-perfect-square.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o valid-perfect-square valid-perfect-square.c
	./valid-perfect-square
	gcov valid-perfect-square.c
rm:
	rm -fv valid-perfect-square
	rm -fv valid-perfect-square.gcda
	rm -fv valid-perfect-square.gcno
	rm -fv valid-perfect-square.c.gcov