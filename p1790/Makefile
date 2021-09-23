.DEFAULT_GOAL: all
all: clean main
	./check-if-one-string-swap-can-make-strings-equal
clean:
	rm -fv check-if-one-string-swap-can-make-strings-equal
main:
	gcc -o check-if-one-string-swap-can-make-strings-equal check-if-one-string-swap-can-make-strings-equal.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o check-if-one-string-swap-can-make-strings-equal check-if-one-string-swap-can-make-strings-equal.c
	./check-if-one-string-swap-can-make-strings-equal
	gcov check-if-one-string-swap-can-make-strings-equal.c
rm:
	rm -fv check-if-one-string-swap-can-make-strings-equal
	rm -fv check-if-one-string-swap-can-make-strings-equal.gcno
	rm -fv check-if-one-string-swap-can-make-strings-equal.gcda
	rm -fv check-if-one-string-swap-can-make-strings-equal.c.gcov
