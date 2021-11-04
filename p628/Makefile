.DEFAULT_GOAL: all
all: clean main
	./maximum-product-of-three-numbers
clean:
	rm -fv maximum-product-of-three-numbers
main:
	gcc -o maximum-product-of-three-numbers maximum-product-of-three-numbers.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o maximum-product-of-three-numbers maximum-product-of-three-numbers.c
	./maximum-product-of-three-numbers
	gcov maximum-product-of-three-numbers.c
rm:
	rm -fv maximum-product-of-three-numbers
	rm -fv maximum-product-of-three-numbers.gcno
	rm -fv maximum-product-of-three-numbers.gcda
	rm -fv maximum-product-of-three-numbers.c.gcov
	rm -fv array.h.gcov