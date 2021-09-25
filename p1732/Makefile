.DEFAULT_GOAL: all
all: clean main
	./find-the-highest-altitude
clean:
	rm -fv find-the-highest-altitude
main:
	gcc -o find-the-highest-altitude find-the-highest-altitude.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-the-highest-altitude find-the-highest-altitude.c
	./find-the-highest-altitude
	gcov find-the-highest-altitude.c
rm:
	rm -fv find-the-highest-altitude
	rm -fv find-the-highest-altitude.gcno
	rm -fv find-the-highest-altitude.gcda
	rm -fv find-the-highest-altitude.c.gcov
	rm -fv array.h.gcov