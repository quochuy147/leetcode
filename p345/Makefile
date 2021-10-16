.DEFAULT_GOAL: all
all: clean main
	./reverse-vowels-of-a-string
clean:
	rm -fv reverse-vowels-of-a-string
main:
	gcc -o reverse-vowels-of-a-string reverse-vowels-of-a-string.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o reverse-vowels-of-a-string reverse-vowels-of-a-string.c
	./reverse-vowels-of-a-string
	gcov reverse-vowels-of-a-string.c
rm:
	rm -fv reverse-vowels-of-a-string
	rm -fv reverse-vowels-of-a-string.gcno
	rm -fv reverse-vowels-of-a-string.gcda
	rm -fv reverse-vowels-of-a-string.c.gcov