.DEFAULT_GOAL: all
all: clean main
	./plus-one
clean:
	rm -fv plus-one
main:
	gcc -o plus-one plus-one.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o plus-one plus-one.c
	./plus-one
	gcov plus-one.c
rm:
	rm -fv plus-one
	rm -fv plus-one.gcno
	rm -fv plus-one.gcda
	rm -fv plus-one.c.gcov
	rm -fv array.h.gcov