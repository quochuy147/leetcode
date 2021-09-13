.DEFAULT_GOAL: all
all: clean main
	./add-to-array-form-of-integer
clean:
	rm -fv add-to-array-form-of-integer
main:
	gcc -o add-to-array-form-of-integer add-to-array-form-of-integer.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o add-to-array-form-of-integer add-to-array-form-of-integer.c
	./add-to-array-form-of-integer
	gcov add-to-array-form-of-integer.c
rm:
	rm -fv add-to-array-form-of-integer
	rm -fv add-to-array-form-of-integer.gcno
	rm -fv add-to-array-form-of-integer.gcda
	rm -fv add-to-array-form-of-integer.c.gcov
	rm -fv array.h.gcov