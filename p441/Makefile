.DEFAULT_GOAL: all
all: clean main
	./arranging-coins
clean:
	rm -fv arranging-coins
main:
	gcc -o arranging-coins arranging-coins.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o arranging-coins arranging-coins.c
	./arranging-coins
	gcov arranging-coins.c
rm:
	rm -fv arranging-coins
	rm -fv arranging-coins.gcno
	rm -fv arranging-coins.gcda
	rm -fv arranging-coins.c.gcov