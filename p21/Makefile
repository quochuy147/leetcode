.DEFAULT_GOAL: all
all: clean main
	./merge-two-sorted-lists
clean:
	rm -fv merge-two-sorted-lists
main:
	gcc -o merge-two-sorted-lists merge-two-sorted-lists.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o merge-two-sorted-lists merge-two-sorted-lists.c
	./merge-two-sorted-lists
	gcov merge-two-sorted-lists.c
rm:
	rm -fv merge-two-sorted-lists
	rm -fv merge-two-sorted-lists.gcno
	rm -fv merge-two-sorted-lists.gcda
	rm -fv merge-two-sorted-lists.c.gcov
	rm -fv list.h.gcov