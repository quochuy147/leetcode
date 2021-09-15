.DEFAULT_GOAL: all
all: clean main
	./largest-number-at-least-twice-of-others
clean:
	rm -fv largest-number-at-least-twice-of-others
main:
	gcc -o largest-number-at-least-twice-of-others largest-number-at-least-twice-of-others.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o largest-number-at-least-twice-of-others largest-number-at-least-twice-of-others.c
	./largest-number-at-least-twice-of-others
	gcov largest-number-at-least-twice-of-others.c
rm:
	rm -fv largest-number-at-least-twice-of-others
	rm -fv largest-number-at-least-twice-of-others.gcno
	rm -fv largest-number-at-least-twice-of-others.gcda
	rm -fv largest-number-at-least-twice-of-others.c.gcov
	rm -fv array.h.gcov