.DEFAULT_GOAL: all
all: clean main
	./powx-n
clean:
	rm -fv powx-n
main:
	gcc -o powx-n powx-n.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o powx-n powx-n.c
	./powx-n
	gcov powx-n.c
rm:
	rm -fv powx-n
	rm -fv powx-n.gcno
	rm -fv powx-n.gcda
	rm -fv powx-n.c.gcov