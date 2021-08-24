.DEFAULT_GOAL: all
all: clean main
	./check-if-n-and-its-double-exist
clean:
	rm -fv check-if-n-and-its-double-exist
main:
	gcc -o check-if-n-and-its-double-exist check-if-n-and-its-double-exist.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o check-if-n-and-its-double-exist check-if-n-and-its-double-exist.c
	./check-if-n-and-its-double-exist
	gcov check-if-n-and-its-double-exist.c
rm:
	rm -fv check-if-n-and-its-double-exist
	rm -fv check-if-n-and-its-double-exist.gcda
	rm -fv check-if-n-and-its-double-exist.gcno
	rm -fv check-if-n-and-its-double-exist.c.gcov
