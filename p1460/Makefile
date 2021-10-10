.DEFAULT_GOAL: all
all: clean main
	./make-two-arrays-equal-by-reversing-sub-arrays
clean:
	rm -fv make-two-arrays-equal-by-reversing-sub-arrays
main:
	gcc -o make-two-arrays-equal-by-reversing-sub-arrays make-two-arrays-equal-by-reversing-sub-arrays.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o make-two-arrays-equal-by-reversing-sub-arrays make-two-arrays-equal-by-reversing-sub-arrays.c
	./make-two-arrays-equal-by-reversing-sub-arrays
	gcov make-two-arrays-equal-by-reversing-sub-arrays.c
rm:
	rm -fv make-two-arrays-equal-by-reversing-sub-arrays
	rm -fv make-two-arrays-equal-by-reversing-sub-arrays.gcno
	rm -fv make-two-arrays-equal-by-reversing-sub-arrays.gcda
	rm -fv make-two-arrays-equal-by-reversing-sub-arrays.c.gcov
	rm -fv array.h.gcov