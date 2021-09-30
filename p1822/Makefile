.DEFAULT_GOAL: all
all: clean main
	./sign-of-the-product-of-an-array
clean:
	rm -fv sign-of-the-product-of-an-array
main:
	gcc -o sign-of-the-product-of-an-array sign-of-the-product-of-an-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o sign-of-the-product-of-an-array sign-of-the-product-of-an-array.c
	./sign-of-the-product-of-an-array
	gcov sign-of-the-product-of-an-array.c
rm:
	rm -fv sign-of-the-product-of-an-array
	rm -fv sign-of-the-product-of-an-array.gcno
	rm -fv sign-of-the-product-of-an-array.gcda
	rm -fv sign-of-the-product-of-an-array.c.gcov
	rm -fv array.h.gcov
	