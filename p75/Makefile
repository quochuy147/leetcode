.DEFAULT_GOAL: all
all: clean main
	./sort-colors
clean:	
	rm -fv sort-colors
main:
	gcc -o sort-colors sort-colors.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o sort-colors sort-colors.c
	./sort-colors
	gcov sort-colors.c
rm:
	rm -fv sort-colors
	rm -fv sort-colors.gcno
	rm -fv sort-colors.gcda
	rm -fv sort-colors.c.gcov
	rm -fv array.h.gcov