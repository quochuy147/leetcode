.DEFAULT_GOAL: all
all: clean main
	./three-divisors
clean:
	rm -fv three-divisors
main:
	gcc -o three-divisors three-divisors.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o three-divisors three-divisors.c
	./three-divisors
	gcov three-divisors.c
rm:
	rm -fv three-divisors
	rm -fv three-divisors.gcno
	rm -fv three-divisors.gcda
	rm -fv three-divisors.c.gcov