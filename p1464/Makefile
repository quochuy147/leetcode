.DEFAULT_GOAL: all
all: clean main
	./maximum-product-of-two-elements-in-an-array
clean:
	rm -fv maximum-product-of-two-elements-in-an-array
main:
	gcc -o maximum-product-of-two-elements-in-an-array maximum-product-of-two-elements-in-an-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o maximum-product-of-two-elements-in-an-array maximum-product-of-two-elements-in-an-array.c
	./maximum-product-of-two-elements-in-an-array
	gcov maximum-product-of-two-elements-in-an-array.c
rm:
	rm -fv maximum-product-of-two-elements-in-an-array
	rm -fv maximum-product-of-two-elements-in-an-array.gcno
	rm -fv maximum-product-of-two-elements-in-an-array.gcda
	rm -fv maximum-product-of-two-elements-in-an-array.c.gcov
	rm -fv array.h.gcov