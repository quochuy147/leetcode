.DEAFAULT_GOAL: all
all: clean main
	./add-two-numbers
clean:
	rm -fv add-two-numbers
main:
	gcc -o add-two-numbers add-two-numbers.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o add-two-numbers add-two-numbers.c
	./add-two-numbers
	gcov add-two-numbers.c
rm:
	rm -fv add-two-numbers
	rm -fv add-two-numbers.gcno
	rm -fv add-two-numbers.gcda
	rm -fv add-two-numbers.c.gcov
	rm -fv list.h.gcov