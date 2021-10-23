.DEFAULT_GOAL: all
all: clean main
	./single-element-in-a-sorted-array
clean:
	rm -fv single-element-in-a-sorted-array
main:
	gcc -o single-element-in-a-sorted-array single-element-in-a-sorted-array.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o single-element-in-a-sorted-array single-element-in-a-sorted-array.c
	./single-element-in-a-sorted-array
	gcov single-element-in-a-sorted-array.c
rm:
	rm -fv single-element-in-a-sorted-array
	rm -fv single-element-in-a-sorted-array.gcno
	rm -fv single-element-in-a-sorted-array.gcda
	rm -fv single-element-in-a-sorted-array.c.gcov
	rm -fv array.h.gcov