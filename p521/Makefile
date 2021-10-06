.DEFAULT_GOAL: all
all: clean main
	./longest-uncommon-subsequence-i
clean:
	rm -fv longest-uncommon-subsequence-i
main:
	gcc -o longest-uncommon-subsequence-i longest-uncommon-subsequence-i.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o longest-uncommon-subsequence-i longest-uncommon-subsequence-i.c
	./longest-uncommon-subsequence-i
	gcov longest-uncommon-subsequence-i.c
rm:
	rm -fv longest-uncommon-subsequence-i
	rm -fv longest-uncommon-subsequence-i.gcno
	rm -fv longest-uncommon-subsequence-i.gcda
	rm -fv longest-uncommon-subsequence-i.c.gcov