.DEFAULT_GOAL: all
all: clean main
	./valid-parentheses
clean:
	rm -fv valid-parentheses
main:
	gcc -o valid-parentheses valid-parentheses.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o valid-parentheses valid-parentheses.c
	./valid-parentheses
	gcov valid-parentheses.c
rm:
	rm -fv valid-parentheses
	rm -fv valid-parentheses.gcda
	rm -fv valid-parentheses.gcno
	rm -fv valid-parentheses.c.gcov