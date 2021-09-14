.DEFAUL_GOAL: all
all: clean main
	./is-subquence
clean:
	rm -fv is-subquence
main:
	gcc -o is-subquence is-subquence.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o is-subquence is-subquence.c
	./is-subquence
	gcov is-subquence.c
rm:
	rm -fv is-subquence
	rm -fv is-subquence.gcno
	rm -fv is-subquence.gcda
	rm -fv is-subquence.c.gcov