.DEFAULT_GOAL: all
all: clean main
	./reverse-prefix-of-word
clean:
	rm -fv reverse-prefix-of-word
main:
	gcc -o reverse-prefix-of-word reverse-prefix-of-word.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o reverse-prefix-of-word reverse-prefix-of-word.c
	./reverse-prefix-of-word
	gcov reverse-prefix-of-word.c
rm:
	rm -fv reverse-prefix-of-word
	rm -fv reverse-prefix-of-word.gcno
	rm -fv reverse-prefix-of-word.gcda
	rm -fv reverse-prefix-of-word.c.gcov