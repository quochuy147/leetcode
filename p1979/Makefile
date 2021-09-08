.DEAFAULT_GOAL: all
all: clean main
	./find-greatest-common-divisor-of-array
clean:
	rm -fv find-greatest-common-divisor-of-array
main:
	gcc -o find-greatest-common-divisor-of-array find-greatest-common-divisor-of-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-greatest-common-divisor-of-array find-greatest-common-divisor-of-array.c
	./find-greatest-common-divisor-of-array
	gcov find-greatest-common-divisor-of-array.c
rm:
	rm -fv find-greatest-common-divisor-of-array
	rm -fv find-greatest-common-divisor-of-array.gcno
	rm -fv find-greatest-common-divisor-of-array.gcda
	rm -fv find-greatest-common-divisor-of-array.c.gcov