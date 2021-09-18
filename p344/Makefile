.DEFAULT_GOAL: all
all: clean main
	./reverse-string
clean:
	rm -fv reverse-string
main:
	gcc -o reverse-string reverse-string.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o reverse-string reverse-string.c
	./reverse-string
	gcov reverse-string.c
rm:
	rm -fv reverse-string
	rm -fv reverse-string.gcno
	rm -fv reverse-string.gcda
	rm -fv reverse-string.c.gcov