.DEFAULT_GOAL: all
all: clean main
	./smallest-range-i
clean:
	rm -fv smallest-range-i
main:
	gcc -o smallest-range-i smallest-range-i.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o smallest-range-i smallest-range-i.c
	./smallest-range-i
	gcov smallest-range-i.c
rm:
	rm -fv smallest-range-i
	rm -fv smallest-range-i.gcda
	rm -fv smallest-range-i.gcno
	rm -fv smallest-range-i.c.gcov