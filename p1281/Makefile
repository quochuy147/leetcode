.DEFAULT_GOAL: main
all: clean main
	./subtract-the-product-and-sum-of-digits-of-an-integer
clean:
	rm -fv subtract-the-product-and-sum-of-digits-of-an-integer
main:
	gcc -o subtract-the-product-and-sum-of-digits-of-an-integer subtract-the-product-and-sum-of-digits-of-an-integer.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o subtract-the-product-and-sum-of-digits-of-an-integer subtract-the-product-and-sum-of-digits-of-an-integer.c
	./subtract-the-product-and-sum-of-digits-of-an-integer
	gcov subtract-the-product-and-sum-of-digits-of-an-integer.c
rm:
	rm -fv subtract-the-product-and-sum-of-digits-of-an-integer
	rm -fv subtract-the-product-and-sum-of-digits-of-an-integer.gcda
	rm -fv subtract-the-product-and-sum-of-digits-of-an-integer.gcno
	rm -fv subtract-the-product-and-sum-of-digits-of-an-integer.c.gcov