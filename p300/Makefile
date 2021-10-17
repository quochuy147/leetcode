.DEFAULT_GOAL: all
all: clean main
	./longest-increasing-subsequence
clean:
	rm -fv longest-increasing-subsequence
main:
	gcc -o longest-increasing-subsequence longest-increasing-subsequence.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o longest-increasing-subsequence longest-increasing-subsequence.c
	./longest-increasing-subsequence
	gcov longest-increasing-subsequence.c
rm:
	rm -fv longest-increasing-subsequence
	rm -fv longest-increasing-subsequence.gcno
	rm -fv longest-increasing-subsequence.gcda
	rm -fv longest-increasing-subsequence.c.gcov
	rm -fv array.h.gcov