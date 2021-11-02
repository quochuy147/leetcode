.DEFAULT_GOAL: all
all: clean main
	./thousand-separator
clean:
	rm -fv thousand-separator
main:
	gcc -o thousand-separator thousand-separator.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o thousand-separator thousand-separator.c
	./thousand-separator
	gcov thousand-separator.c
rm:	
	rm -fv thousand-separator
	rm -fv thousand-separator.gcno
	rm -fv thousand-separator.gcda
	rm -fv thousand-separator.c.gcov