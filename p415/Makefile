.DEAFAULT_GOAL: all
all: clean main
	./add-strings
clean:
	rm -fv add-strings
main:
	gcc -o add-strings add-strings.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o add-strings add-strings.c
	./add-strings
	gcov add-strings.c
rm:
	rm -fv add-strings
	rm -fv add-strings.gcno
	rm -fv add-strings.gcda
	rm -fv add-strings.c.gcov