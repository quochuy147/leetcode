.DEFAULT_GOAL: all
all: clean main
	./longest-continuous-increasing-subsequence
clean:
	rm -fv longest-continuous-increasing-subsequence
main:
	gcc -o longest-continuous-increasing-subsequence longest-continuous-increasing-subsequence.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o longest-continuous-increasing-subsequence longest-continuous-increasing-subsequence.c
	./longest-continuous-increasing-subsequence
	gcov longest-continuous-increasing-subsequence.c
rm:
	rm -fv  longest-continuous-increasing-subsequence
	rm -fv longest-continuous-increasing-subsequence.gcda
	rm -fv longest-continuous-increasing-subsequence.gcno
	rm -fv longest-continuous-increasing-subsequence.c.gcov
