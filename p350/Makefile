.DEFAULT_GOAL: all
all: clean main
	./intersection-of-two-arrays-ii
clean:
	rm -fv intersection-of-two-arrays-ii
main:
	gcc -o intersection-of-two-arrays-ii intersection-of-two-arrays-ii.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o intersection-of-two-arrays-ii intersection-of-two-arrays-ii.c
	./intersection-of-two-arrays-ii
	gcov intersection-of-two-arrays-ii.c
rm:
	rm -fv intersection-of-two-arrays-ii
	rm -fv intersection-of-two-arrays-ii.gcno
	rm -fv intersection-of-two-arrays-ii.gcda
	rm -fv intersection-of-two-arrays-ii.c.gcov
	rm -fv array.h.gcov