.DEFAULT_GOAL: all
all: clean main
	./prime-arrangements
clean:
	rm -fv prime-arrangements
main:
	gcc -o prime-arrangements prime-arrangements.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o prime-arrangements prime-arrangements.c
	./prime-arrangements
	gcov prime-arrangements.c
rm:
	rm -fv prime-arrangements
	rm -fv prime-arrangements.gcno
	rm -fv prime-arrangements.gcda
	rm -fv prime-arrangements.c.gcov