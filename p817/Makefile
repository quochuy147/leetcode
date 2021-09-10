.DEFAULT_GOAL: all
all: clean main
	./linked-list-components
clean:
	rm -fv linked-list-components
main:
	gcc -o linked-list-components linked-list-components.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o linked-list-components linked-list-components.c
	./linked-list-components
	gcov linked-list-components.c
rm:
	rm -fv linked-list-components
	rm -fv linked-list-components.gcno
	rm -fv linked-list-components.gcda
	rm -fv linked-list-components.c.gcov
	rm -fv list.h.gcov