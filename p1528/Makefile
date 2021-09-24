.DEFAULT_GOAL: all
all: clean main
	./shuffle-string
clean:
	rm -fv shuffle-string
main:
	gcc -o shuffle-string shuffle-string.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o shuffle-string shuffle-string.c
	./shuffle-string
	gcov shuffle-string.c
rm:
	rm -fv shuffle-string
	rm -fv shuffle-string.gcno
	rm -fv shuffle-string.gcda
	rm -fv shuffle-string.c.gcov
	rm -fv array.h.gcov