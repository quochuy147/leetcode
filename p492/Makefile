.DEFAULT_GOAL: all
all: clean main
	./construct-the-rectangle
clean:
	rm -fv construct-the-rectangle
main:
	gcc -o construct-the-rectangle construct-the-rectangle.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o construct-the-rectangle construct-the-rectangle.c
	./construct-the-rectangle
	gcov construct-the-rectangle.c
rm:
	rm -fv construct-the-rectangle
	rm -fv construct-the-rectangle.gcno
	rm -fv construct-the-rectangle.gcda
	rm -fv construct-the-rectangle.c.gcov
	rm -fv array.h.gcov