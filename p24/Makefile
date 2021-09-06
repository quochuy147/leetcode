.DEFAULT_GOAL: all
all: clean main
	./swap-nodes-in-pairs
clean:
	rm -fv swap-nodes-in-pairs
main:
	gcc -o swap-nodes-in-pairs swap-nodes-in-pairs.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o swap-nodes-in-pairs swap-nodes-in-pairs.c
	./swap-nodes-in-pairs
	gcov swap-nodes-in-pairs.c
rm:
	rm -fv swap-nodes-in-pairs
	rm -fv swap-nodes-in-pairs.gcno
	rm -fv swap-nodes-in-pairs.gcda
	rm -fv swap-nodes-in-pairs.c.gcov
	rm -fv list.h.gcov