.DEFAULT_GOAL: all
all: clean main
	./longest-common-subsequence
clean:
	rm -fv longest-common-subsequence
main:
	gcc -o longest-common-subsequence longest-common-subsequence.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o longest-common-subsequence longest-common-subsequence.c
	./longest-common-subsequence
	gcov longest-common-subsequence.c
rm:
	rm -fv longest-common-subsequence
	rm -fv longest-common-subsequence.gcno
	rm -fv longest-common-subsequence.gcda
	rm -fv longest-common-subsequence.c.gcov